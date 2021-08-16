// augumu nobide                                                        Rihards Jastşemskis

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int  msk, zsk;
	cout << "Ievadi meitenu skaitu : ";
	cin >> msk;
	cout << "Ievadi zenu skaitu : ";
	cin >> zsk;

	// Aprekina meitenes
	if (msk > 0)
	{
		double msum = 0;
		int* maug;
		maug = new int[msk];

		for (int m = 0; m < msk; m++)
		{
			cout << "Ievadiet " << m + 1 << " meitenes augumu (cm) : ";
			cin >> maug[m];
			msum = msum + maug[m];
		}
		for (int m = 0; m < msk; m++)
		{
			cout << m + 1 << " meitenes augums ir " << maug[m] << " cm nobide " << maug[m] - (msum / msk) << " cm" << endl;
		}
		cout << "Videjais meitenu augums : " << msum / msk " cm" << endl;
		delete[] maug;
	}

	// Aprekina zenus
	if (zsk > 0)
	{
		double zsum = 0;
		int* zaug;
		zaug = new int[zsk];

		
		{
			cout << "Ievadiet " << z + 1 << " zenu augumu (cm) : ";
			cin >> zaug[z];
			zsum = zsum + zaug[z];
		}
		for (int z = 0; z < zsk; z++)
		{
			cout << z + 1 << " meitenes augums ir " << zaug[z] << " cm nobide " << zaug[z] - (zsum / zsk) << " cm" << endl;
		}
		cout << "Videjais zenu augums : " << zsum / zsk << " cm" << endl;
		delete[] zaug;
	}
	_getch();
}
