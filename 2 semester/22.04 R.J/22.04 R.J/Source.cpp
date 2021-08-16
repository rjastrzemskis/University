//1-2.uzd                      Rihards Jastrþemskis

#include <iostream>
#include <conio.h>
#include "funkcijas.h"

using namespace std;
int main()
{
	//{
	//	//1uzd
	//	cout << "1.uzd" << endl;
	//	int mliel, i;
	//	cout << "Ievadiet masiva lielumu : ";
	//	cin >> mliel;
	//	int* masivs = new int[mliel];

	//	for (i = 0; i < mliel; i++)
	//	{
	//		cout << "Ievadiet " << i + 1 << " elementa lielumu : ";
	//		cin >> masivs[i];
	//	}
	//	for (i = 0; i < mliel; i++)
	//	{
	//		cout << masivs[i] << " ";
	//	}
	//	delete[] masivs;
	//}
	{
		//2uzd
		cout << endl << "2.uzd" << endl;
		int mrind, i, j, sk, mkol = 25, garaka = 0, tek = 0;
		cout << "Ievadiet masiva rindu skaitu : ";
		cin >> mrind;

		char** masivs = new char* [mrind];
		for (i = 0; i < mrind; i++)
			masivs[i] = new char[mkol];

		for (i = 0; i < mrind; i++)
		{
			cout << "Ievadiet " << i + 1 << " teksta rindu : ";
			cin >> masivs[i];
			sk = sask(masivs[i]);
			if (sk > garaka)
			{
				garaka = sk;
				tek = i;
			}
		}
		cout << "Garak rinda ir " << masivs[tek] << endl;
		cout << "Garakas rindas garums ir " << garaka << endl;
		for (i = 0; i < mrind; i++) 
		{
			delete[] masivs[i];
		}
		delete[] masivs;
	}
	_getch();
}
