#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int R = 0; /* ���������� ������� ������� */
    int counter; /* counter - ���������� �������� ����� for */
    char MENU; /*���������� ��������� ����*/
    /* ���� ���������� ����������� �������  */
    cout << "Vvedi R, gde R - razmer massiva" << endl;
    cin >> R; /* ���� R*/
    int array1[R]; /* ������������� ����������� ������� */
    srand(time(NULL));
    for (counter = 0; counter < R; counter++)
    {
        array1[counter] = rand() % 201 - 100; /* ���������� ������� ���������� ������� �� -100 �� +100*/;
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
            /* ���� ��� ������ �������*/
            case '1':

                for (counter = 0; counter < R; counter++)
                {
                    if ((counter + 1) < 10)
                    {
                        cout << "Element Number " << counter + 1 << "   " << array1[counter] << endl;
                    }
                    else
                    {
                        cout << "Element Number " << counter + 1 << "  " << array1[counter] << endl;
                    }
                };
                break;
            /*���� 2 ��� ����������*/
            case '2':
                int temporary;

                for (counter = 0; counter < R - 1; counter++)
                {
                    for (int second_counter = 0; second_counter < R - counter - 1; second_counter++)
                    {
                        if (array1[second_counter] > array1[second_counter + 1])
                        {
                            temporary = array1[second_counter];
                            array1[second_counter] = array1[second_counter + 1];
                            array1[second_counter + 1] = temporary;
                        }
                    }
                }
                for (counter = 0; counter < R; counter++)
                {
                    if ((counter + 1) < 10)
                    {
                        cout << "Element Number " << counter + 1 << "   " << array1[counter] << endl;
                    }
                    else
                    {
                        cout << "Element Number " << counter + 1 << "  " << array1[counter] << endl;
                    }
                };
                break;
        }
        system("Pause");
    }
    while (MENU != '3');
    return 0;
}
