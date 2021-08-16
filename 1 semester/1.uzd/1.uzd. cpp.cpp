// 2.uzd - Rihards Jastrþemskis

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int a; 
cout << "Cik reizes velies atkartot darbibu?";
cin >> a;
system("cls");
while (a >= 1)
{
    double x, y; 
	system("cls");
	cout << "Ievadiet x vertibu : ";
	cin >> x;
	system("cls");
	cout << "Ievadita x vertiba ir " << x << endl;

	if (x > 0.0)
	{
		cout << "Aprekina log2(x)";
		y = log2(x);
    }
	else
	{
		if (-M_PI <= x)
		{
			cout << "Aprekina sin(x)-2.1";
			y = sin(x) - 2.1;
		}
		else
		{
			cout << "Aprekina 1/x^2";
			y = 1 / pow(x, 2);
		}
	}
	cout << "=" << y << endl;
	_getch(); 
	a--; 
}
_getch();
}