#include<iostream>
using namespace std;
template <class T>
T maina(int n, T* massivs)
{
	int i, j;
	T pagaidu = massivs[0];
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (massivs[i] < massivs[j])
			{
				pagaidu = massivs[i];
				massivs[i] = massivs[j];
				massivs[j] = pagaidu;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << massivs[i] << "\t";
	}
	return massivs[i];
}