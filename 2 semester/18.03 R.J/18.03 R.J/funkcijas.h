#include<iostream>
using namespace std;

int C(int m, int n)
{
	if (n == 0 || m==n)
		return 1;
	return C(m, n - 1) + C(m - 1, n - 1);
}

int Digits(char S[], int p)
{
	if (S[p] == 0) {
		return 0;
	}
	else if (S[p] >= 'A' && S[p] <= 'Z')
	{
		return Digits(S, p + 1) + 1;
	}
	else
	{
		return Digits(S, p + 1);
	}
		
}

int matsum(int masivs[10][10])
{
	int i, j, sum = 0;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			if (i == j)
				sum = sum + masivs[i][j];
	return sum;
}

int kon(int masivs[10][10])
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		cout << endl;
		for (j = 0; j < 10; j++)
		{
			if (j < i)
				masivs[i][j] = 0;
			cout << masivs[i][j] << "\t";
		}
	}
	return masivs[i][j];
}

int maina(int n, int massivs[])
{
	int i, j;
	int pagaidu = massivs[0];
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

float maina(int n, float massivs[])
{
	int i, j;
	float pagaidu = massivs[0];
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
	




	







