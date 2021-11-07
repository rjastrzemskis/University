///Task 2 Rihards Jastrþemskis

#include <iostream>
#include <conio.h>

using namespace std;

struct DoubleList
{
    string value;
    DoubleList* head = nullptr, * tail = nullptr, * next = nullptr, * previous = nullptr, * current = nullptr;

    DoubleList()
    {
    }

    DoubleList(string value) {
        this->value = value;
    }

    void AddValues(string station)
    {
        if (current == nullptr) {
            current = new DoubleList(station);
            current->next = current;
            current->previous = nullptr;
            head = current;
        }
        else if (current->previous == nullptr) {
            current->next = new DoubleList(station);
            current->next->previous = current;
            tail = current->next;
            current = current->next;
        }
        else {
            current->next = new DoubleList(station);
            current->next->previous = current;
            current->previous->next = current;
            tail = current->next;
            current = current->next;
        }
    }

    void NextDestination()
    {
        DoubleList* temp = head;
        int userInput, direction = 1;

        do
        {
            cout << "*Choice what kind of action you want to do:" << endl;
            cout << "1 to see next station" << endl;
            cout << "0 to end trip" << endl;
            cout << "Enter number from 0 to 1: ", cin >> userInput;

            switch (userInput)
            {
            case 1:
                if (direction == 1) {
                    cout << temp->value << endl;
                    temp = temp->next;
                    if (temp == nullptr)
                    {
                        temp = tail->previous;
                        direction = 0;
                    }
                    else direction = 1;
                }
                else if (direction == 0)
                {
                    cout << temp->value << endl;
                    temp = temp->previous;
                    if (temp == nullptr)
                    {
                        temp = head->next;
                        direction = 1;
                    }
                    else direction = 0;
                }
            }
        } while (userInput != 0);
    }
};

void main()
{
    DoubleList list;
    int userInput, i;
    string value;

    do
    {
        cout << "*Choice what kind of action you want to do:" << endl;
        cout << "1 To add train stations" << endl;
        cout << "2 To start trip" << endl;
        cout << "0 To stop program" << endl;
        cout << "Enter number from 0 to 2: ", cin >> userInput;

        switch (userInput)
        {
        case 1:
            cout << "How much you want to add to list: ", cin >> i;
            while (i != 0)
            {
                cout << "Please enter station: ", cin >> value;
                list.AddValues(value);
                i--;
            }
            break;
        case 2:
            list.NextDestination();
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