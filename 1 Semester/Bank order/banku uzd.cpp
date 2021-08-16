#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	double pargadu, parmenesi, summa, uzrokam, procenti, termins, parnottermsum, termliel12;
	pargadu = 0;
	uzrokam = 0;
	parmenesi = 0;
	cout << "Ievadiet kredita summu = ";
	cin >> summa;
	cout << "Ievadiet terminu menesos = ";
	cin >> termins;
	cout << "Ievadiet procentu likmi = ";
	cin >> procenti;

	system("cls");

	cout << "Jusu izveleta summa ir " << summa << "Eur uz terminu " << termins << " menesi un ar procentu likmi " << procenti << "%" << endl;
	procenti = procenti / 100;
	pargadu = summa * procenti;
	termliel12 = termins / 12;
	parnottermsum = termliel12 * pargadu;
	uzrokam = summa - parnottermsum;
	parmenesi = summa / termins;
	cout << "Par gadu mes ieturesim " << pargadu << "Eur lielu nodokli" << endl;
	cout << "Par " << termins << " menesiem mes ieturesim " << parnottermsum << "Eur" << endl;
	cout << "Uz rokam sanemsiet " << uzrokam << "Eur" << endl;
	cout << "Katru menesi bus jamaksa " << parmenesi << "Eur" << endl;
	
	_getch();
}