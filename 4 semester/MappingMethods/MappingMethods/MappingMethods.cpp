#include<iostream>

using namespace std;

int main()
{
    {
        //Bubble method
        int numberArray[] = { -2, 22, 2, 0, 44 };
        int arrayLength = sizeof(numberArray) / sizeof(*numberArray);
        int temp = 0;

        cout << "Before bubble method: ";
        for (int i = 0; i < arrayLength; i++)
        {
            cout << numberArray[i] << " ";
        }

        for (int i = 0; i < arrayLength; i++)
        {
            for (int x = i + 1; x < arrayLength; x++)
            {
                if (numberArray[i] > numberArray[x])
                {
                    temp = numberArray[i];
                    numberArray[i] = numberArray[x];
                    numberArray[x] = temp;
                }
            }
        }

        cout << endl << "After bubble method: ";
        for (int i = 0; i < arrayLength; i++)
        {
            cout << numberArray[i] << " ";
        }
    }
    {
        //Sorting method
        int numberArray[] = { -2, 22, 2, 0, 44 };
        int arrayLength = sizeof(numberArray) / sizeof(*numberArray);
        int min = 0;
        int temp = 0;

        cout << endl << "Before sorting method: ";
        for (int i = 0; i < arrayLength; i++)
        {
            cout << numberArray[i] << " ";
        }

        for (int i = 0; i < arrayLength; i++)
        {
            min = i;
            for (int x = i + 1; x < arrayLength; x++)
            {
                if (numberArray[x] < numberArray[min])
                    min = x;
            }

            temp = numberArray[i];
            numberArray[i] = numberArray[min];
            numberArray[min] = temp;
        }

        cout << endl << "After sorting method: ";
        for (int i = 0; i < arrayLength; i++)
        {
            cout << numberArray[i] << " ";
        }
    }

    {
        //Insert method
        int numberArray[] = { -2, 22, 2, 0, 44 };
        int arrayLength = sizeof(numberArray) / sizeof(*numberArray);
        int temp = 0;
        int x = 0;

        cout << endl << "Before insert method: ";
        for (int i = 0; i < arrayLength; i++)
        {
            cout << numberArray[i] << " ";
        }

        for (int i = 1; i < arrayLength; i++)
        {
            temp = numberArray[i];
            x = i - 1;
            while (temp < numberArray[x])
            {
                numberArray[x + 1] = numberArray[x];    
                x = x - 1;
            }

            numberArray[x + 1] = temp;
        }

        cout << endl << "After insert method: ";
        for (int i = 0; i < arrayLength; i++)
        {
            cout << numberArray[i] << " ";
        }
    }
}
