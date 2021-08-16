//basketbols - jalabo vel!                            Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	int numurs[10][2], speletajs[10][2], piezime[10][2], p, pirma = 0, otra = 0;
	int j, i;
	string uzvards[10][2], uzvards2;
	//Ievada speletajus 
	cout << "Ievadiet komandu sastavus" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 10; i++)
		{
			cout << "Ievadiet " << j + 1 << " komandas " << i + 1 << " speletaja uzvardu : ";
			cin >> uzvards[i][j];
			cout << "Ievadiet " << uzvards[i][j] << " numuru : ";
			cin >> numurs[i][j];
			piezime[i][j] = 0;
			speletajs[i][j] = 0;
		}
	}

	//Ievada speletaju , kas guvis punktu/noraidijumu
	cout << "Spele sakusie! Ievadiet speletaju , kas guvis punktu vai noraidijumu" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	for (int k = 0; k < 100; k++)
	{
		cout << "Ievadiet 0-beigt , 1-3 punktu , 4-piezime : ";
		cin >> p;
		switch (p)
		{
			//Ievada punktus
		case 1:
		case 2:
		case 3:
			cout << "Ievadiet speletaja uzvardu : ";
			cin >> uzvards2;
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 10; i++)
				{
					if (uzvards2 == uzvards[i][j])
					{
						speletajs[i][j] = speletajs[i][j] + p;
						cout << uzvards[i][j] << " guva " << p << " punkti" << endl;

					}
					else
					{
						uzvards2 != uzvards[i][j];
					}
				}
			}
			break;
			//Ievada piezimes
		case 4:
			cout << "Ievadiet speletaja uzvardu : ";
			cin >> uzvards2;
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 10; i++)
				{
					if (uzvards2 == uzvards[i][j])
					{
						if (piezime[i][j] < 5)
						{
							piezime[i][j] = piezime[i][j] + 1;
							cout << uzvards[i][j] << "  tika pieskirta piezime " << endl;
							cout << "Kopa " << uzvards[i][j] << " ir " << piezime[i][j] << " piezime(s)" << endl;
						}
						else if (piezime[i][j] >= 5)
							cout << uzvards[i][j] << " nr. " << numurs[i][j] << " tiek noraidits!" << endl;
					}
					else
					{
						uzvards2 != uzvards[i][j];
					}

				}
			}
			break;
		case 0:
			k = 100;
			break;
		}
	}
	//tablo 
	j = 0;

	cout << "--------------------------------------------------------------------" << endl;
	cout << "Uzvards" << setw(10) << "Nr." << setw(8) << "P" << setw(10) << "Piez" << endl;
	for (i = 0; i < 10; i++)
	{
		pirma = pirma + speletajs[i][j];
		cout << uzvards[i][j] << setw(10) << numurs[i][j] << setw(10) << speletajs[i][j] << setw(10) << piezime[i][j] << endl;
	}
	cout << "Pirmas komandas kopejais punktu skaits : " << pirma << endl;
	j = 1;
	cout << "--------------------------------------------------------------------" << endl;

	cout << "Uzvards" << setw(10) << "Nr." << setw(8) << "P" << setw(10) << "Piez" << endl;
	for (i = 0; i < 10; i++)
	{
		otra = otra + speletajs[i][j];
		cout << uzvards[i][j] << setw(10) << numurs[i][j] << setw(10) << speletajs[i][j] << setw(10) << piezime[i][j] << endl;
	}
	cout << "Otras komandas kopejais punktu skaits : " << otra << endl;
	cout << "--------------------------------------------------------------------" << endl;
	_getch();
}