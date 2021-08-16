#include <iostream>

using namespace std;

void mainigie(int *a, int *b, int *c) 
{
	*a = 9; *b = 5; *c = 0;
	if (a >= b)
		*c = a - b;
	else 
		if (a < b)
		*c = b  - a;
	cout << "Vertibas funcija mainigie ir "
	 << *a << "," << *b << "," << *c << endl;
}

void fact(int n, int *x)
{
	while (n > 0)
	{
		*x *= n;
		n -= 1;
	}
}