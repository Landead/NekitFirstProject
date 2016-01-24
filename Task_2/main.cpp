#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ShowArray(int array1[])
{
    for (int i = 0; i < sizeof(array1) ; i++)
    {
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

void SortArray(int array1[])
{
    int temp = 0;
    for (int j = 0; j < sizeof(array1) - 1; j++)
    {
        for (int k = 0; k < sizeof(array1) - j - 1; k++)
        {
            if (array1[k] > array1[k + 1])
            {
            temp = array1[k];
            array1[k] = array1[k + 1];
            array1[k + 1] = temp;
            }
        }
    }
    for (j = 0; j < sizeof(array1); j++)
    {
        if ((j + 1) < 10)
        {
            cout << "Element Number " << j + 1 << "   " << array1[j] << endl;
        }
        else
        {
            cout << "Element Number " << j + 1 << "  " << array1[j] << endl;
        }
    };
}

int main()
{
    int R = 0;
    int counter;
    char MENU;
    cout << "Vvedi R, gde R - razmer massiva" << endl;
    cin >> R;
    int array1[R];
    srand(time(NULL));
    for (counter = 0; counter < R; counter++)
    {
        array1[counter] = rand() % 201 - 100;
    }
    do
    {
        system("cls");

        cout << "Menus" << endl;
        cout << "Dlya vivoda massiva nazhmite 1" << endl;
        cout << "Dlya Sortirovki elementov massiva nazhmite 2" << endl;
        cout << "Dlya vihoda nazhmite 3" << endl;
        cin >> MENU;
        switch (MENU)
        {

            case '1':
                ShowArray();
                break;
            case '2':
                SortArray();
                break;
        }
        system("Pause");
    }
    while (MENU != '3');
    return 0;
}
