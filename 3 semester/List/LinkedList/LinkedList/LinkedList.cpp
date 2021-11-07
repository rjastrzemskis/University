///Task 1 Rihards Jastrþemskis

#include <iostream>
#include <conio.h>

using namespace std;

struct LinkedList
{
    string value;
    LinkedList* head = nullptr, * next = nullptr, * current = nullptr;

    LinkedList()
    {
    }

    LinkedList(string value) {
        this->value = value;
    }

    void AddValues(string people)
    {
        if (current == nullptr) {
            current = new LinkedList(people);
            head = current;
        }
        else {
            current->next = new LinkedList(people);
            current = current->next;
        }
    }

    void RemoveAllPersons()
    {
        LinkedList* temp = new LinkedList();
        while (head != nullptr)
        {
            temp = head;
            cout << temp->value << " went away" << endl;
            head = head->next;
            delete temp;
            temp = head;

            if (temp == nullptr)
            {
                cout << "no one left!" << endl;
            }
            else
            {
                cout << "new row: ";
                while (temp != nullptr) {
                    cout << temp->value << " ";
                    temp = temp->next;
                }
                cout << endl;
            }
        }
    }
};

void main()
{
    LinkedList list;
    int userInput, i;
    string value;

    do
    {
        cout << "*Choice what kind of action you want to do:" << endl;
        cout << "1 To add people" << endl;
        cout << "2 To remove all people" << endl;
        cout << "0 To stop program" << endl;
        cout << "Enter number from 0 to 2: ", cin >> userInput;

        switch (userInput)
        {
        case 1:
            cout << "How much you want to add to list: ", cin >> i;
            while (i != 0)
            {
                cout << "Please enter people: ", cin >> value;
                list.AddValues(value);
                i--;
            }
            break;
        case 2:
            list.RemoveAllPersons();
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