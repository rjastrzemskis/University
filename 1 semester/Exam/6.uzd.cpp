#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
// Ievade
    int masivs[4][4], masivs2[4][4], i, j, x, y, a;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "Ievadiet matrica a skaitlus : ";
            cin >> masivs[i][j];
        }
    }
   for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "Ievadiet matrica b skaitlus : ";
            cin >> masivs2[i][j];
        }
    }
// Ievadito rezultatu paradisana
   cout << endl;
   cout << "matrica a";
    for (i = 0; i < 4; i++)
    {
        cout << endl;
        for (j = 0; j < 4; j++)
        {
            cout << masivs[i][j] << " ";

        }
    }
    cout << endl;
    cout << "matrica b";
    for (i = 0; i < 4; i++)
    {
        cout << endl;
        for (j = 0; j < 4; j++)
        {
            cout << masivs2[i][j] << " ";

        }
    }
//Izvele
    cout << endl;
    cout << endl;
    cout << "ievadiet matrica a kolonu kuru gribat pamainit ";
    cin >> x;
    cout << "ievadiet matrica b rindu ar kuru gribat apmainit  ";
    cin >> y;

//maiòas solis
    for (i = 0; i < 4; i++)
    {

        a = masivs[i][x - 1];
        masivs[i][x - 1] = masivs2[y - 1][i];
        masivs2[y - 1][i] = a;
    }
// rezultâta izvade
    cout << endl;
        cout << "matrica a";
        for (i = 0; i < 4; i++)
        {
            cout << endl;
            for (j = 0; j < 4; j++)
            {
                cout << masivs[i][j] << " ";

            }
        }
        cout << endl;
        cout << "matrica B" ;
        for (i = 0; i < 4; i++)
        {
            cout << endl;
            for (j = 0; j < 4; j++)
            {
                cout << masivs2[i][j] << " ";

            }
        }
    
    _getch();
}