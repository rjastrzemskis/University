#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int students[5], eksamens[3];
	double vid[5], summa[5] = {};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Ludzu ievadiet " << i + 1 << " skolena " << j + 1 << " eksamena atzimi " << "";
			cin >> eksamens[j];
			summa[i] = summa[i] + eksamens[j];
		}
		vid[i] = summa[i] / 3;
	}

	cout << setw(1) << "students" << setw(22) << "videja atzime" << setw(25) << "piezime" << endl;;
	for (int i = 0; i < 5; i++)
	{
		cout << setw(4) << i + 1 << setw(20) << vid[i];
		if (vid[i] < 4)
			cout << setw(40) << " Jus tiksiet atskaitits!" << endl;
		else if (vid[i] <= 6)
				cout << setw(40) << "Jums , vajag loti pacensties!" << endl;
			else if (vid[i] <= 8)
					cout << setw(40) << "Jums , vajag pacensties!" << endl;
				else cout << setw(40) << "Jus esat malacis!" << endl;
				
	}
	_getch();

}