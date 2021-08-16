//1-2.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#include "funkcijas.h"

using namespace std;
int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;
        double x[] = { 0.2, 0.1, 0.3, 0.8, 0.5, 0.6, 0.9, 0.4, 0.7, 1 };
        int y[] = { 10, 30, 20, 40, 50, 80, 60, 70, 90, 100 };
        cout << "double tipam: " << endl;
        maina(10, x);
        cout << endl;
        cout << "int tipam: " << endl;
        maina(10, y);
    }
    {
        //2uzd
        cout << endl;
        cout << "2.uzd" << endl;
        double (*mainisdoubles)(int, double[]);
        double x[] = { 0.2, 0.1, 0.3, 0.8, 0.5, 0.6, 0.9, 0.4, 0.7, 1 };
        int (*mainisint)(int, int[]);
        int y[] = { 10, 30, 20, 40, 50, 80, 60, 70, 90, 100 };
        cout << "double tipam: " << endl;
        mainisdoubles = maina;
        (*mainisdoubles)(10, x);
        cout << endl;
        cout << "int tipam: " << endl;
        mainisint = maina;
        (*mainisint)(10, y);
    }
    _getch();
}










