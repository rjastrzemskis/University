///Queue Rihards Jastržemskis

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
    array = new int[length];
}

      void AddValue(int value)
      {
          if (counter < length)
          {
              array[counter] = value;
          }
          else
          {
              length = length * 2;
              int* increasedArray = new int[length];
              for (int i = 0; i < length / 2; i++)
                  increasedArray[i] = array[i];
              
              delete[]array;
              array = increasedArray;
              increasedArray = NULL;

          	array[counter] = value;
          }
          counter++;
      }

      int RemoveValue()
      {
          int value = 0;
          if (counter > 0)
          {
              value = array[0];
              for (int i = 0; i < counter; i++)
                  array[i] = array[i + 1];

              counter--;
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
          for (int i = 0; i < counter; i++)
              if(array[i]!=NULL)
              cout << array[i] << ' ';

          cout << endl;
      }
};

void main()
{
    struct Queue Queue(5);
    int value = 0, userInput = 0;

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
            cout << "Please enter value to add it to queue: ", cin >> value;
            Queue.AddValue(value);
            break;
        case 2:
            Queue.RemoveValue();
            break;
        case 3:
            Queue.ToString();
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
