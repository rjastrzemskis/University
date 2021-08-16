// laika parveide                     Rihards Jastrþemskis

#include<iostream>
#include<string>
#include<conio.h>


using namespace std;

int main()
{
	int st, m;
	char x;
	cout << "Ievadi stundas : ";
	cin >> st;
	cout << "Ievadi minutes : ";
	cin >> m;

	cout << "Vai Jus ievadijat militaro laiku ? y / n ";
	cin >> x;

	switch (char(x))
	{
		// no 24 st uz 12 stundam
	case 'y':
		if (st >= 12)
		{
			st = st -= 12;
			m = m;
			cout << "Laiks ir " << st << ":" << m << " p.m" << endl;
			break;
		}
		else if (st < 12)
		{
			st = st;
			m = m;
			cout << "Laiks ir " << st << ":" << m << " a.m" << endl;
			break;
		}
		// no 12 st uz 24 stundam
	case 'n':
		cout << "Vai tas bij no rita ? y / n ";
		cin >> x;
		switch (char(x))
		{
		case 'y':
			st = st;
			m = m;
			cout << "Laiks ir " << st << ":" << m << endl;
			break;
		case 'n':
			if (st >= 12)
			{
				st = 0;
				m = m;
				cout << "Laiks ir " << st << ":" << m << endl;
				break;
			}
			else if (st > 12)
			{
				st += 12;
				m = m;
				cout << "Laiks ir " << st << ":" << m << endl;
				break;
			}
		}
		_getch();
	}
}