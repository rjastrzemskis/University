//1-3.uzd                      Rihards Jastrþemskis

#include <iostream>
#include <conio.h>
#include "funkcijas.h"

using namespace std;
int main()
{
	{
		//1uzd
		cout << "1.uzd" << endl;
		int a = 111, b = 222, c = 333;
		cout << "Sakuma manigo vertibas " << endl
			<< "Mainiga a vertiba: " << a << endl
			<< "Mainiga b vertiba: " << b << endl
			<< "Mainiga c vertiba: " << c << endl
			<< "Mainiga a adrese: " << &a << endl
			<< "Mainiga b adrese: " << &b << endl
			<< "Mainiga c adrese: " << &c << endl;

		//raditaju modificesana
		int* pagaidu;
		pagaidu = &a;
		*pagaidu = 9;
		b = *pagaidu;
		c = *pagaidu;

		cout << "Samainam mainigo vertibas " << endl
			<< "Mainiga a vertiba: " << a << endl
			<< "Mainiga b vertiba: " << b << endl
			<< "Mainiga c vertiba: " << c << endl;
	}
	{
		//2uzd
		cout << "2.uzd" << endl;
		int az = 5, bz = 8, cz = 0;
		cout << "Vertibas pirms funkcijas izsauksanasir "
			<< az << "," << bz << "," << cz << endl;
		mainigie(&az, &bz, &cz);
		cout << "Vertibas pec funkcijas izsauksanas ir "
			<< az << "," << bz << "," << cz << endl;
	}
	{
		//3uzd
		cout << "3.uzd" << endl;
		int n, x = 1;
		cout << "Ievadiet skaitli : ";
		cin >> n;
		if (n > 0) 
		{
			fact(n, &x);
			cout << "Ievadita skaitla " << n << " factorials ir " << x << endl;
		}
		else
			cout << "Ievaditais skaitlis ir mazaks par 0 vai 0" << endl;
	}
	_getch();
}
