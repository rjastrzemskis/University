//1-4.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;
        int mliel, i, summa=0;
        cout << "Ievadiet masiva lielumu : ";
        cin >> mliel;
        int* masivs;
        masivs = new int[mliel];

        for (i = 1; i <= mliel; i++)
        {
            cout << "Ievadiet " << i << " elementa lielumu : ";
            cin >> masivs[i];
        }
        cout << "Sakuma vertibas ";
        for (i = 1; i <= mliel; i++)
            cout << masivs[i] << " ";

        cout << "\nSumma ";
        for (i = 1; i <= mliel; i++)
            summa = summa + masivs[i];
        cout << " " << summa << endl;

    }
    {
        //2uzd
        int i, mliel, summa = 0;
        cout << "Ievadiet masiva lielumu : ";
        cin >> mliel;
        mliel = mliel + 1;
        int* masivsa;
        masivsa = new int[mliel];
        cout << "Ievadiet A vektora vertibas" << endl;
        for (i = 1; i < mliel; i++)
        {
            cout << "Ievadiet " << i << " elementa vertibu : ";
            cin >> masivsa[i];
        }
        int* masivsb;
        masivsb = new int[mliel];
        cout << "Ievadiet B vektora vertibas" << endl;
        for (i = 1; i < mliel; i++)
        {
            cout << "Ievadiet " << i << " elementa vertibu : ";
            cin >> masivsb[i];
        }
        int* masivsab;
        masivsab = new int[mliel];
        for (i = 1; i < mliel; i++)
        {
            masivsab[i] = masivsa[i] * masivsb[i];
            cout << "AB = " << masivsab[i] << endl;
        }
        for (i = 1; i < mliel; i++)
            summa = summa + masivsab[i];
        cout << "Summa = " << summa << endl;
    }
    {
        //3uzd
        cout << "3.uzd" << endl;
        int mliel, i;
        cout << "Ievadiet masiva lielumu : ";
        cin >> mliel;
        int* masivs;
        masivs = new int[mliel];

        for (i = 1; i <= mliel; i++)
        {
            cout << "Ievadiet " << i << " elementa lielumu : ";
            cin >> masivs[i];
        }
        cout << "Sakuma vertibas " ;
        for (i = 1; i <= mliel; i++)
            cout << masivs[i] << " ";

        cout << "\nApgrieztas vertibas " ;
        for (i = mliel; i >= 1; i--)
            cout << masivs[i] << " ";

    }
    {
        //4uzd
        cout << "\n4.uzd" << endl;
        int maz, i, j, mliel;
        cout << "Ievadiet masiva lielumu : ";
        cin >> mliel;
        int* masivs;
        masivs = new int[mliel];

        for (i = 1; i <= mliel; i++)
        {
            cout << "Ievadiet " << i << " elementa lielumu : ";
            cin >> masivs[i];
        }
        
        cout << "Sakuma vertibas ";
        for (i = 1; i <= mliel; i++)
            cout << masivs[i] << " ";

        // Sakarto elementus augosa seciba
        for (i = 1; i <= mliel; i++)
        {
            for (j = i + 1; j <= mliel; j++)
            {
                if (masivs[j] < masivs[i])
                {
                    maz = masivs[i];
                    masivs[i] = masivs[j];
                    masivs[j] = maz;
                }
            }
        }
        cout << "\nElementi tiek ievadi augosa seciba" << endl;
        for (i = 1; i <= mliel; i++)
            cout << i << " elements ir " << masivs[i] << endl;
    }
    _getch();
}