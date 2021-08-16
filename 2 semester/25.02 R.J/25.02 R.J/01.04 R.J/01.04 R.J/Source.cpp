//1-4.uzd                      Rihards Jastrþemskis

#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
    {
        //1uzd
        cout << "1.uzd" << endl;;
        int K, N;
        cout << "Ievadiet K vertibu ";
        cin >> K;
        cout << "Ievadiet N vertibu ";
        cin >> N;
        ofstream outFile;
        outFile.open("dati.txt");
        cout << "Dati tika ierakstiti datne" << endl;

        while (N > 0)
        {
            outFile << string((K), '*');
            N--;
            outFile << endl;
        }
        outFile.close();
    }
    {
        //2uzd
        cout << "2.uzd" << endl;;
        int j, i, M, N;
        cout << "Ievadiet N ";
        cin >> N;
        cout << "Ievadiet M ";
        cin >> M;
        ofstream outFile;
        outFile.open("reizinajums.txt");
        cout << "Dati tika ierakstiti datne" << endl;

        outFile << "Reizinâjuma tabula N x M" << endl;
        for (i = 0; i <= M; i++)
        {
            for (j = 0; j <= N; j++)
            {
                outFile << j << "x" << i << "=" << i * j << "\t";
            }
            outFile << endl;
        }
        outFile.close();
        
    }
    {
        //3uzd
        cout << "3.uzd" << endl;
        string nosaukums;
        cout << "Ievadiet datnes pilnu nosakumu ar paplasinajumu , atdalot abus ar punktu" << endl;
        cin >> nosaukums;
        string line;
        ifstream inFile;
        inFile.open(nosaukums);
        while (inFile.is_open())
        {
            while (getline(inFile, line))
            {
                cout << line << endl;
            }
            inFile.close();
        }
    }
    {
        //4uzd
        cout << "4.uzd" << endl;
        string nosaukums;
        int i, y = 0;
        char x, ch;
        cout << "Ievadiet datnes pilnu nosakumu ar paplasinajumu , atdalot abus ar punktu" << endl;
        cin >> nosaukums;
        cout << "Ievadiet , ko velaties atrast" << endl;
        cin >> x;
        
        (int)x; //parveidojam uz ascii , ilgi sedeju , tomer sanaca izdomat sadu variantu.
        ifstream inFile(nosaukums);
        while (inFile)
        {
            inFile.get(ch);
            i = ch;
            if (i == (int)x)
                y++;  
        }
        cout << "Tikka atrasti " << y << " simboli" << endl;
        inFile.close();
    }
    _getch();
}