//1-9.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{
	{
		//1.2.uzd kvadrata
		float a, P, S;
		cout << "Dots kvadrats ievadi malu a ";
		cin >> a;
		printf("P = 4 * a = %f\n", P = 4 * a);
		printf("S = a * a = %f\n", S = a * a);
	}
	{
		//3.uzd taisnistura
		double a, b, S, P;
		cout << "Dots taisnisturis ievadi malu a ";
		cin >> a;
		cout << "Dots taisnisturis ievadi malu b ";
		cin >> b;
		printf("S = a * b = %f\n", S = a * b);
		printf("P = 2 * (a + b) = %f\n", P = 2 * (a + b));
	}
	{
		//4.uzd riòíis
		double d, L;
		cout << "Dots rinka diametru d = ";
		cin >> d;
		printf("L = 3.14 * d = %f\n", L = 3.14 * d);
	}
	{
		//5.uzd videja aritm
		double a, b, x;
		cout << "Ievadi a vertibu ";
		cin >> a;
		cout << "Ievadi b vertibu ";
		cin >> b;
		printf("x = (a + b ) / 2 = %f\n", x = (a + b) / 2);
	}
	{
		//6.uzd funkcija
		double y, x;
		cout << "Ievadi x vertibu ";
		cin >> x;
		printf("y = 3x^6 - 6x^2 -7 = %f\n", y = (3 * pow(x, 6)) - (6 * pow(x, 2)) - 7);
	}
	{
		//7.uzd funkcija
		double y, x, z;
		cout << "Ievadi x vertibu ";
		cin >> x;
		cout << "Ievadi y vertibu ";
		cin >> y;
		printf("z = x^3 - 3xy - (x+y)^2 + y^4 = %f\n", z = (pow(x, 3)) + 3 * x * y - (pow(x + y, 2)) + (pow(y, 4)));
	}
	{
		//8.uzd pakapes
		double a;
		cout << "Ievadi a vertibu ";
		cin >> a;
		printf("a^8 = %f\n", a = a * a, a = a * a, a = a * a);
	}
	{
		//9.uzd pakapes
		double a, g, pi = 3.1415;
		cout << "Ievadi vertibu radianos ";
		cin >> a;
		printf("g = 180 / pi * a = %f\n", g = 180 / pi*a);
	}
	_getch();
}