//1-3.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;
        int mrin, mkol, i, j;
        cout << "Ievadiet matricas rindu lielumu : ";
        cin >> mrin;
        cout << "Ievadiet matricas kolonu lielumu : ";
        cin >> mkol;

        cout << "Ievadiet matricu" << endl;
        int** mat = new int* [mrin];
        for (i = 0; i < mrin; i++)
        {
            mat[i] = new int[mkol];
            for (j = 0; j < mkol; j++)
            {
                cout << "Ievadiet " << i + 1 << " rindas " << j + 1 << " kolonnas vertibu : ";
                cin >> mat[i][j];
            }
        }
        for (i = 0; i < mrin; i++)
        {
            int min = mat[i][0];
            for (j = 0; j < mkol; j++)
            {
                if (mat[i][j] < min)
                    min = mat[i][j];
            }
            cout << i + 1 << " rindas minimala vertiba " << min << endl;
        }
    }
    {
        //2uzd
        cout << "2.uzd" << endl;
        int mrin, mkol, i, j;
        cout << "Ievadiet matricas rindu lielumu : ";
        cin >> mrin;
        cout << "Ievadiet matricas kolonu lielumu : ";
        cin >> mkol;
        
        cout << "Ievadiet A matricu" << endl;
        int** mata = new int* [mrin];
        for (i = 0; i < mrin; i++)
        {
            mata[i] = new int[mkol];
            for (j = 0; j < mkol; j++)
            {
                cout << "Ievadiet " << i + 1 << " rindas " << j + 1 << " kolonnas vertibu : ";
                cin >> mata[i][j];
            }
        }
        cout << "Ievadiet B matricu" << endl;
        int** matb = new int* [mrin];
        for (i = 0; i < mrin; i++)
        {
            matb[i] = new int[mkol];
            for (j = 0; j < mkol; j++)
            {
                cout << "Ievadiet " << i + 1 << " rindas " << j + 1 << " kolonnas vertibu : ";
                cin >> matb[i][j];
            }
        }
        cout << "Matricu summa";
        int** matab = new int* [mrin];
        for (i = 0; i < mrin; i++)
        {
            cout << endl;
            matab[i] = new int[mkol];
            for (j = 0; j < mkol; j++)
            {
                matab[i][j] = mata[i][j] + matb[i][j];
                cout << matab[i][j] << " ";
            }
        }
        cout << endl;
    }
    {
        //3uzd
        cout << "3.uzd" << endl;
        int  m, n, i, j;
        cout << "Ievadiet matricas rindu lielumu : ";
        cin >> n;
        cout << "Ievadiet matricas kolonu lielumu : ";
        cin >> m;

        cout << "Ievadiet aij matricu" << endl;
        int** mat = new int* [n];
        for (i = 0; i < n; i++)
        {
            mat[i] = new int[m];
            for (j = 0; j < m; j++)
            {
                cout << "Ievadiet " << i + 1 << " rindas " << j + 1 << " kolonnas vertibu : ";
                cin >> mat[i][j];
            }
        }
        int* vekt = new int[m];
        cout << "Ievadiet bj vektora vertibas" << endl;
        for (j = 0; j < m; j++)
        {
            cout << "Ievadiet " << j + 1 << " elementa vertibu : ";
            cin >> vekt[j];
        }
        cout << "Matricas un vektora reizinajuma summa";
        int* sum = new int[i];
        for (i = 0; i < n; i++)
        {
            sum[i] = 0;
            for (j = 0; j < m; j++)
            {
                sum[i] += mat[i][j] * vekt[j];
            }
            cout << " " << endl;
            cout << sum[i];
        }
    }
    _getch();
}