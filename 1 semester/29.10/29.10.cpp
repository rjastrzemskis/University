// 29.10                       Rihards Jastrþemskis
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int reizes, lomi;
    double svars;
    cout << "Cik reizes makskernieks bij zveja?";
    cin >> reizes;
    system("cls");
    while (reizes >= 1)
    {
        int sk = 1 ;
        double virs = 0 , vid = 0;
        cout << "Cik daudz lomu vins nokera?";
        cin >> lomi;
        system("cls");
        cout << "Vins nokera "<< lomi << " lomus" << endl;
        while (lomi >= sk)
        {

            cout << "Ievadiet " << sk << " loma svaru " ;
            cin >> svars ;
            {
                if (svars > 5)
                {
                    virs += 1;
                }

                vid = vid + svars;
                sk++; 

            }

        }
        cout << "Videjais svars ir " << vid / lomi << "kg" << endl;
        cout << "Lomu skaits virs 5kg ir " << virs << endl;


        _getch();

        reizes--;
    }
    _getch();
}