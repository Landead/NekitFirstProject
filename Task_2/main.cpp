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
    cout << "������� ����� " << i + 1 << " = " << numbers[i] << endl;

    /* ����� ���� ���������� �� �������� ���������� */

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
    int temp = 0; // ����� ������������� ���������� � �������
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
    setlocale( LC_ALL,"Russian" );/**< ��������� �������� �������� */
   // SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
   // SetConsoleOutputCP(1251);
    int numbersCount = 0; /**< ����� ������������ ��������� �������� */
    //int counter; - ������ �� ����� �����
    char MENU;
    cout << "������� ������ �������" << endl;
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

        cout << "����:" << endl;
        cout << "1: ������� ������" << endl;
        cout << "2: ����������� ������" << endl;
        cout << "3: �����" << endl;
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
