//lidmaðîna                                      Rihards Jastrþemskis
#include<iostream>
#include<conio.h>
#define _USE_MATH_DEFINES
#include<math.h>

using namespace std;

int main()
{
	int i;
	double v, w, e, q, h, n, x, t;
	cout << "Ievadiet vertibu v : ";
	cin >> v;
	cout << "Ievadiet vertibu w : ";
	cin >> w;
	cout << "Ievadiet vertibu e : ";
	cin >> e;
	cout << "Ievadiet vertibu q : ";
	cin >> q;
	cout << "Ievadiet vertibu h : ";
	cin >> h;
	cout << "Ievadiet vertibu n : ";
	cin >> n;
	for (i = 0; i <= 20; i++)
	{
		t = 0.1 + (h * i);
		x = (v * t) - ((w * t)* (1 - (pow(e, (-1 * (n * t))) * ((sin(((q * sqrt(2 * t)) / v))) / ((q * sqrt(2 * t)) / v)))));
		cout << "Ja t vertiba ir " << t << " un x ir " << x << endl;
	}
	_getch();
}