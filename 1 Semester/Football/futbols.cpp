//futbols                                                                                        Rihards Jastrþemskis
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int punkti[10][10];
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j< 10; j++) {
			cout << "Ievadiet " << i + 1 << " komandas ieguto punktu skaitu pret ";  cout << j + 1 << " komandu : ";
			cin >> punkti[i][j];
			punkti[j][i] = 2 - punkti[i][j];
		}
	}
	int punktikopa[10];
	for (int i = 0; i < 10; i++) {
		punktikopa[i] = 0;
		for (int j = 0; j < 10; j++) {
			if (i != j) {
				punktikopa[i] += punkti[i][j];
			}
		}
	}

	cout << "Vietu sadalijums" << endl;
	for (int i = 0; i < 10; i++) {
		int liel = 0;
		for (int j = 0; j < 10; j++) {
			if (punktikopa[j] > punktikopa[liel])
				liel = j;
		}
		cout << i + 1 << " vieta " << liel + 1 << " komandai ar " << punktikopa[liel] << " punktiem" << endl;
		punktikopa[liel] = -1;
	}

	_getch();
}