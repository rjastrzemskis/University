//1-6.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;
        int K, N;
        cout << "Ievadiet K vertibu ";
        cin >> K;
        cout << "Ievadiet N vertibu ";
        cin >> N;

        while (N > 0)
        {
            cout << K << endl;
            N--;
        }
    }
    {
        //2uzd
        cout << "2.uzd" << endl;
        double x, Y;
        int N, n;
        cout << "Ievadiet x vertibu ";
        cin >> x;
        cout << "Ievadiet N vertibu ";
        cin >> N;

        // for
        Y = 0;
        cout << "for" << endl;
        for (n = 1; n <= N; n++)
        {
            Y = Y + 1 / pow(x, n);
        }
        cout << "Y = " << Y << endl;

        // while
        Y = 0, n = 1;
        cout << "while" << endl;
        while (n <= N)
        {
            Y = Y + 1 / pow(x, n);
            n++;
        }
        cout << "Y = " << Y << endl;

        // do while
        Y = 0, n = 1;
        cout << "do while" << endl;
        do {
            Y = Y + 1 / pow(x, n);
            n++;
        } while (n <= N);
        cout << "Y = " << Y << endl;
    }
    {
        //3uzd
        cout << "3.uzd" << endl;
        int j, i, x, y;
        cout << "Ievadiet pirmo beigu ciparu ";
        cin >> y;
        cout << "Ievadiet otro beigu ciparu ";
        cin >> x;

        for (i = 0; i <= x; i++)
        {
            for (j = 0; j <= y; j++)
            {
                cout << j << "x" << i << "=" << i * j << " ";
            }
            cout << endl;
        }
    }
    {
        //4uzd
        cout << "4.uzd" << endl;
        int A, B, N;
        cout << "Ievadiet A vertibu ";
        cin >> A;
        cout << "Ievadiet B vertibu ";
        cin >> B;

        for (A; A <= B; A++)
        {
            for (N = 1; N <= A; N++)
            {
                cout << A;
            }
            cout << endl;
        }
    }
    {
        //5uzd
        cout << "5.uzd" << endl;
        int a, b, c;
        cout << "Ievadiet summu ";
        cin >> c;

        for (a = 0; a <= c; a++)
        {
            for (b = 0; b <= c; b++)
            {
                if (pow(a, 2) + pow(b, 2) != pow(c, 2)) continue;
                {
                    cout << a << "^2+" << b << "^2=" << c << "^2" << endl;
                }
            }
        }
    }
    {
        //6uzd
        cout << "6.uzd" << endl;
        double sum1 = 1, sum2;
        int x = 1;

        do {
            x = x + 2;
            sum2 = sum1 - (1.0 / x);
            x = x + 2;
            sum1 = sum2 + (1.0 / x);
        } while (sum1 - sum2 > 0.00001);
        cout << 4 * sum1 << endl;
    }
    _getch();
}