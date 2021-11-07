///Task 3 Rihards Jastrþemskis

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct CyclicList
{
    string value;
    CyclicList* next = nullptr, * previous = nullptr, * lastRight = nullptr, * current = nullptr;

    CyclicList()
    {
    }

    CyclicList(string value) {
        this->value = value;
    }

    void AddValues(string book)
    {
        if (current == nullptr)
        {
            current = new CyclicList(book);
            current->next = current;
            current->previous = current;
            lastRight = current;
        }
        else {
            lastRight->next = new CyclicList(book);
            lastRight->next->next = current;
            lastRight->next->previous = lastRight;
            lastRight = lastRight->next;
            current->previous = lastRight;
        }
    }

    void NextOrPrevious()
    {
        CyclicList* temp = current;
        int userInput;

        do
        {
            cout << "*Choice what kind of action you want to do:" << endl;
            cout << "1 to see next book" << endl;
            cout << "2 to see previous book" << endl;
            cout << "0 to exit library" << endl;
            cout << "Enter number from 0 to 1: ", cin >> userInput;

            switch (userInput)
            {
            case 1:
                temp = temp->next;
                cout << temp->value << endl;
                break;
            case 2:

                temp = temp->previous;
                cout << temp->value << endl;
                break;
            }
        } while (userInput != 0);
    }
};

void main()
{
    CyclicList list;
    int userInput, i;
    string value;

    do
    {
        cout << "*Choice what kind of action you want to do:" << endl;
        cout << "1 To add books" << endl;
        cout << "2 To check library" << endl;
        cout << "0 To stop program" << endl;
        cout << "Enter number from 0 to 2: ", cin >> userInput;

        switch (userInput)
        {
        case 1:
            cout << "How much you want to add to list: ", cin >> i;
            getline(cin, value);
            while (i != 0)
            {
                cout << "Please enter book: ", getline(cin, value);
                list.AddValues(value);
                i--;
            }
            break;
        case 2:
            list.NextOrPrevious();
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