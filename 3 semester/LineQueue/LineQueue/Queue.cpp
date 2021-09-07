#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;
struct Queue
{
private:
    int counter = 0;
    vector<int> array;
    int length = 0;

public: Queue(int startLength)
{
    length = startLength;
}
    void AddValue(int value)
    {
	if (array.size() < length)
       {
            array.push_back(value);
            counter++;
       }
        if (array.size() == length)
        {
            array.push_back(value);
            length *= 2;
            counter++;
        }
    }

    int RemoveValue()
    {
        int value = 0;
        if (array.size() > 0)
        {
            array.erase(array.begin());
            value = array.size();
            counter--;
            if (array.size() == length-1)
                length /= 2;
        }
        if (array.empty())
        {
            cout << "Queue is empty , there is nothing to remove !" << endl;
            value = INT_MIN;
        }
        return value;
    }

    void ToString()
    {
        for (int i = 0; i < array.size(); i++)
            cout << array.at(i) << ' ';

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
        cout << "Enter number from 0 to 3: " , cin >> userInput;

        switch (userInput)
        {
        case 1:
            cout << "Please enter value to add it to queue: " , cin >> x;
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
