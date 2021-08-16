//1-5.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include "funkcijas.h"

using namespace std;
int main()
{
    //{
    //    //1uzd
    //    cout << "1.uzd" << endl;
    //    int m, n, res;
    //    cout << "Ievadiet skaitli m: ";
    //    cin >> m;
    //    cout << "Ievadiet skaitli n: ";
    //    cin >> n;
    //    res = C(m, n);
    //    cout << "Binomialais koeficents ir " << res << endl;
    //}
    {
        //2uzd
        cout << "2.uzd" << endl;
        int res;
        char S[] = "";
        cout << "Ievadiet simbolu un skaitlu kopu: ";
        cin >> S;
        res = Digits(S, 0);
        cout << "Kopa ir " << res << endl;
    }
    {
        //3uzd
        cout << "3.uzd" << endl;
        int res, masivs[10][10] = {
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 } };
        res = matsum(masivs);
        cout << "Matricas diagonalu summa ir " << res << endl;
    }
    {
        //4uzd
        cout << "4.uzd" << endl;
        int masivs[10][10] = {
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 },
            { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 } };
        cout << "Izvadam parveidotu matricu ";
        kon(masivs);
    }
    {
        //5uzd
        cout << endl;
        cout << "5.uzd" << endl;
        float x[] = { 0.2, 0.1, 0.3, 0.8, 0.5, 0.6, 0.9, 0.4, 0.7, 1 };
        int y[] = { 10, 30, 20, 40, 50, 80, 60, 70, 90, 100 };
        cout << "float tipam: " << endl;
        maina(10, x);
        cout << endl;
        cout << "int tipam: " << endl;
        maina(10, y);
    }
    _getch();
}