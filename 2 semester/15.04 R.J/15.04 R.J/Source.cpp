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
		const char* str = "THIS IS A TEXT STRING";
		sask(str);
	}
	{
		//2uzd
		cout << "2.uzd" << endl;
		const char* str = "TH!S IS A T$XT STR!NG";
		simbol(str);
	}
	{
		//3uzd
		cout << endl << "3.uzd" << endl;
		int intarray[5] = { 31, 54, 77, 52, 93 };
		masivavid(intarray);
	}
	_getch();
}
