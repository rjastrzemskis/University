#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int meginajums = 1, parole;
	while (meginajums > -1)
	{
		cout << "Ievadi paroli ";
		cin >> parole;

		switch (parole)
		{
		case 111:
			cout << "Sveicinata Liene" << endl;
			meginajums = -1;
			break;
		case 222:
			cout << "Sveicinati Andri" << endl;
			meginajums = -1;
			break;
		case 333:
			cout << "Sveicinati Karli" << endl;
			meginajums = -1;
			break;
		default:
			cout << "Nepareiza parole ! , jums varat meginat vel " << meginajums << " reizes." << endl;
			meginajums--;
		}
	}
	_getch();
}