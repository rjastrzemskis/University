#include <iostream>

using namespace std;

int main()
{
    //Shell method
    int numberArray[] = { -2, 22, 2, 0, 44 };
    int arrayLength = sizeof(numberArray) / sizeof(*numberArray);
    int temp = 0;
    int i = 0;

    cout << endl << "Before shell method: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cout << numberArray[i] << " ";
    }

	for (int x = arrayLength / 2; x > 0; x/= 2)
	{
		for (int j = x; j < arrayLength; j += 1)
		{
			temp = numberArray[j];
			for (i = j; (i >= x) && (numberArray[i - x] > temp); i -= x)
			{
				numberArray[i] = numberArray[i - x];
			}
			numberArray[i] = temp;
		}
	}

    cout << endl << "After shell method: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cout << numberArray[i] << " ";
    }
}
