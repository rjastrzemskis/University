// Algas aprçíins                                         Rihards Jastrþemskis

#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
    int a;
    cout << "Cik darbiniekiem , velies aprekinat algas?";
    cin >> a;
    system("cls");
    while (a >= 1)
    {
        double izp, y, nod, alga;
        cout << "Ievadiet izpelnu=";
        cin >> izp;   
        system("cls"); 
        cout << "Ievadita izpelna ir " << izp << "EUR" << endl;
        if (izp >= 1000)  
        {
            y = 21;
        }
        else
        {
            if (izp >= 800)
            {
                y = 19;       
            }
            else
            {
                y = 17;    
            }
        }
        nod = y / 100 * izp;
        alga = izp - nod;
        cout << "No jums tiks iekaseti "<< y << "% jeb " << nod << "EUR" << endl;
        cout << "To aprekina ar izp*%="<< nod<< "EUR" << endl;
        cout << "Jus sanemsiet "<< alga << "EUR" << endl;
        cout << "To aprekina ar izp-nod="<< alga <<"EUR" << endl;
        _getch();
        system("cls");
        a--;
    }
}