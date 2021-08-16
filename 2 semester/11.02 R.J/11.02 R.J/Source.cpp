//1-7.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;
        try
        {
            int y, x;
            cout << "Ievadiet x vertibu ";
            cin >> x;
            if (x == '\0')
            {
                throw 1;
            }

            if (0 <= x && x <= 5)
            {
                y = 8 * x - pow(x, 2);
                cout << "y = " << y << endl;
            }
            else
                if (6 <= x && x <= 9)
                {
                    cout << "Jus ievadijat nepareizu skaitli" << endl;
                }
                else if (10 <= x && x <= 200)
                {
                    y = x + 6;
                    cout << "y = " << y << endl;
                }
                else
                {
                    cout << "Jus ievadijat nepareizu skaitli" << endl;
                }
        }
        catch (int x)
        {
            if (x == 1)
            {
                cout << "Jus ievadijat burtu" << endl;
            }
        }
        catch (...)
        {
            cout << "notika kluda" << endl;
        }
        
    }
    _getch();
}