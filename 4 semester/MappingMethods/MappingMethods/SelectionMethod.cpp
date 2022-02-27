#include<iostream>
#include<conio.h>
#include<math.h>
#include<cmath>

using namespace std;

void main1()
{
    int numberArray[] = { -2, 22, 2, 0, 44 };
    int arrayLenght = sizeof(numberArray) / sizeof(*numberArray);
    int temp = 0;

    cout << "Before bubble method: ";
    for (int i = 0; i < arrayLenght; i++)
    {
        cout << numberArray[i] << " ";
    }

    for (int i = 0; i < arrayLenght; i++)
    {
        if (numberArray[i] > numberArray[i + 1] && i + 1 < arrayLenght)
        {
            temp = numberArray[i];
            numberArray[i] = numberArray[i + 1];
            numberArray[i + 1] = temp;
        }
    }

    cout << endl << "After bubble method: ";
    for (int i = 0; i < arrayLenght; i++)
    {
        cout << numberArray[i] << " ";
    }

}