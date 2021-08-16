#include<iostream>
using namespace std;

char sask(const char* str)
{
	int saskaita = 0;
	while (*str != '\0')
	{
		cout << *str;
		str++;
		saskaita++;
	}
	cout << endl << saskaita << endl;
	return 0;
}

char simbol(const char* str)
{
	cout << "TH!S IS A T$XT STR!NG" << endl;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z')
		{
		}
		else if (*str >= ' ' && *str <= ' ')
		{
		}
		else
			cout << *str;
		str++;
	}
	return 0;
}

double masivavid(int intarray[5])
{
	double summa = 0;
	for (int j = 0; j < 5; j++)
	{
		summa = summa + *(intarray + j);
	}
	cout << summa / 5 << endl;
	return 0;
}








