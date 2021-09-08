#include <iostream>
#include <conio.h>

using namespace std;
struct Queue
{
private:
    int counter = 0;
    int* array;
    int length;

public: Queue(int startLength)
{
    length = startLength;
    array = new int[length] {};
}

      void AddValue(int value)
      {
          int arraySize = 0;
          for (int i = 0; i < length; i++)
          {
              if (array[i] != NULL)
                  arraySize++;
              else i = length;
          }

          if (arraySize < length)
          {
              for (int i = 0; i < length; i++)
              {
                  if (array[i] == NULL)
                  {
                      array[i] = value;
                      i = length;
                  }
              }
              counter++;
          }
          else
          {
              length = length * 2;
              int* increasedArray = new int[length];;
              for (int i = 0; i < length; i++)
              {
                  if (i < length / 2)
                      increasedArray[i] = array[i];
                  else
                      increasedArray[i] = NULL;
              }
              delete[]array;
              array = increasedArray;
              increasedArray = NULL;

              for (int i = 0; i < length; i++)
              {
                  if (array[i] == NULL)
                  {
                      array[i] = value;
                      i = length;
                  }
              }
              counter++;
          }
      }

      int RemoveValue()
      {
          int value = 0, arraySize = 0;
          for (int i = 0; i < length; i++)
          {
              if (array[i] != NULL)
                  arraySize++;
              else i = length;
          }

          if (arraySize > 0)
          {
              value = array[0];
              for (int i = 0; i < length; i++)
                  if (i < arraySize - 1)
                      array[i] = array[i + 1];
                  else array[i] = NULL;

              if (arraySize == length && arraySize < length)
              {
                  length = length / 2;
                  int* decreasedArray = new int[length];
                  for (int i = 0; i < length; i++)
                      decreasedArray[i] = array[i];

                  delete[]array;
                  array = decreasedArray;
                  decreasedArray = NULL;
              }
          }
          else
          {
              cout << "Queue is empty , there is nothing to remove!" << endl;
              value = INT_MIN;
          }
          return value;
      }

      void ToString()
      {
          int arraySize = 0;
          for (int i = 0; i < length; i++)
          {
              if (array[i] != NULL)
                  arraySize++;
              else i = length;
          }

          for (int i = 0; i < arraySize; i++)
              cout << array[i] << ' ';

          cout << endl;
      }
};

void main()
{
    struct Queue queue = Queue(5);
    int x = 0, userInput = 0;

    do
    {
        cout << "Choice what kind of action you want to do:" << endl;
        cout << "1 To add value to queue" << endl;
        cout << "2 To remove value from queue" << endl;
        cout << "3 To output queue on screen" << endl;
        cout << "0 To stop program" << endl;
        cout << "Enter number from 0 to 3: ", cin >> userInput;

        switch (userInput)
        {
        case 1:
            cout << "Please enter value to add it to queue: ", cin >> x;
            queue.AddValue(x);
            break;
        case 2:
            queue.RemoveValue();
            break;
        case 3:
            queue.ToString();
            break;
        case 0:
            cout << "Closing program..." << endl;
            break;
        default:
            cout << "Something went wrong , please try again!" << endl;
        }
    } while (userInput != 0);
    _getch();
}
