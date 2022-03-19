#include <iostream>

using namespace std;

void QuickSort(int numberArray[], int low, int high) {
    int temp, i, j, p = 0;

    if (low < high) {
        p = low;
        i = low;
        j = high;

        while (i < j) {
            while (numberArray[i] <= numberArray[p] && i < high)
                i++;
            while (numberArray[j] > numberArray[p])
                j--;
            if (i < j) {
                temp = numberArray[i];
                numberArray[i] = numberArray[j];
                numberArray[j] = temp;
            }
        }

        temp = numberArray[p];
        numberArray[p] = numberArray[j];
        numberArray[j] = temp;
        QuickSort(numberArray, low, j - 1);
        QuickSort(numberArray, j + 1, high);
    }
}

int main()
{
    //QuickSort method
    int numberArray[] = { -2, 22, 2, 0, 44 };
    int arrayLength = sizeof(numberArray) / sizeof(*numberArray);

    cout << endl << "Before QuickSort method: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cout << numberArray[i] << " ";
    }

    quick_sort(numberArray, 0, arrayLength - 1);

    cout << endl << "After QuickSort method: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cout << numberArray[i] << " ";
    }
}
