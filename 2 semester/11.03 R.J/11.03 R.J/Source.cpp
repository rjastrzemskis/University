//1-5.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include "funkcijas.h"

using namespace std;
int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;
        int k;
        cout << "Ievadiet skaitli : ";
        cin >> k;
        bool res = even(k);
        if (res == true)
            cout << k << " ir para skaitlis" << endl;
        else
            cout << k << " ir nepara skaitlis" << endl;
    }
    {
        //2uzd
        cout << "2.uzd" << endl;
        int sk = 0;
        int k;
        for (int i = 0; i < 10; i++)
        {
            cout << "Ievadiet skaitli : ";
            cin >> k;
            bool res = even(k);
            if (res == true)
            {
                sk++;
            }
        }
        cout << sk << " skaitli ir para skaitli" << endl;
    }
    {
        //3uzd
        cout << "3.uzd" << endl;
        double r;
        for (int i = 0; i < 5; i++)
        {
            cout << "Ievadiet lenki radianos : ";
            cin >> r;
            if (0 < r && r < 2 * M_PI)
                cout << r << " no radianiem ir " << radtodeg(r) << " gradi" << endl;
            else
                cout << "Ievadita vertiba " << r << " pasniedza 360 gradus" << endl;
        }
    }
    {
        //4uzd
        cout << "4.uzd" << endl;
        int n;
        cout << "Ievadiet skaitli : ";
        cin >> n;
        if (n > 0)
            cout << "Ievadita skaitla " << n << " divkarsaias factorials ir " << fact2(n) << endl;
        else
            cout << "Ievaditais skaitlis ir mazaks par 0 vai 0" << endl;
    }
    {
        //5uzd
        cout << "5.uzd" << endl;
        double x;
        int y;
        cout << "Ievadiet skaitli : ";
        cin >> x;
        cout << "Ievadiet skaitla pakapi : ";
        cin >> y;
        cout << "Skaitlis no " << x << "^" << y << " ir " << power(x, y) << endl;

    }
    _getch();
}