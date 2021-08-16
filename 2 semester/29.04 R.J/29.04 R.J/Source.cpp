//1uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#include<cmath>
#include"funkcijas.h"

using namespace std;

int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;
        try
        {
            int x,y;
            cout << "Ievadiet x vertibu ";
            cin >> x;
            y = skait(x);
            cout << "y=" << y << endl;
        }
        catch (int x)
        {
            if (x == 1)
            {
                cout << "Jus ievadijat burtu vai ari 0" << endl;
            }
            if (x == 2)
            {
                cout << "Jus ievadijat nepareizu skaitli" << endl;
            }
        }
        catch (...)
        {
            cout << "notika kluda" << endl;
        }
    }
    _getch();
}