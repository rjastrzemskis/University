//4.uzd                                       Rihards Jastrþemskis
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double s, b, h, x, y;
    cout << "Ievadiet s skaitli : ";
    cin >> s;
    cout << "Ievadiet b skaitli : ";
    cin >> b;
    cout << "Ievadiet h skaitli : ";
    cin >> h;
    x = s;
    do
    {
        if (x > 0)
            y = x;
        else
            y = s + x;

        cout << "y vertiba ir " << y << endl;
        cout << "x vertiba ir " << x << endl;

        x = x + h;
    } 
    while (x <= b);
    _getch();
}

