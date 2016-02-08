#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <windows.h>

using namespace std;

void ShowArray(int numbers[], int numbersCount)
{
    for (int i = 0; i < numbersCount; i++)
    {
    cout << "Элемент номер " << i + 1 << " = " << numbers[i] << endl;

    /* часть кода отвечающая за красивую сортировку */

        if ((i + 1) < 10)
        {
            cout << "Element Number " << i + 1 << "   " << array1[i] << endl;
        }
        else
        {
            cout << "Element Number " << i + 1 << "  " << array1[i] << endl;
        }
    };
}

void SortArray(int numbers[], int numbersCount)
{
    int temp = 0; // Внеси инициализацию переменной в условие
    for (int j = 0; j < numbersCount - 1; j++)
    {
        for (int k = 0; k < numbersCount - j - 1; k++)
        {
            if (numbers[k] > numbers[k + 1])
            {
            temp = numbers[k];
            numbers[k] = numbers[k + 1];
            numbers[k + 1] = temp;
            }
        }
    }

}

int main()
{
    setlocale( LC_ALL,"Russian" );/**< Позволяет выводить кирилицу */
   // SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
   // SetConsoleOutputCP(1251);
    int numbersCount = 0; /**< Нужно использовать говорящие названия */
    //int counter; - больше не нужна убери
    char MENU;
    cout << "Введите размер массива" << endl;
    cin >> numbersCount;
    int numbers[numbersCount];
    srand(time(NULL));

    for (int i = 0; i < numbersCount; i++)
    {
        numbers[i] = rand() % 201 - 100;
    }

    do
    {
        system("cls");

        cout << "Меню:" << endl;
        cout << "1: Вывести массив" << endl;
        cout << "2: Сортировать массив" << endl;
        cout << "3: Выйти" << endl;
        cin >> MENU;

        switch (MENU)
        {
            case '1':
                ShowArray(numbers, numbersCount);
                break;
            case '2':
                SortArray(numbers, numbersCount);
                break;
        }
        system("Pause");
    }
    while (MENU != '3');
    return 0;
}
