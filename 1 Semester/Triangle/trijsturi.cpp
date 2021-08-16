// trijsturi                                                 Rihards Jastrzmekis
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    for (int sk = 1; sk <= 5; sk++) {

        double a, b, c, d, p,ha,hb,hc,ma,mb,mc,ba,bb,bc;
        cout << "Ievadiet a vertibu : ";
        cin >> a;
        cout << "Ievadiet b vertibu : ";
        cin >> b;
        cout << "Ievadiet c vertibu : ";
        cin >> c;
        p = (0.5 * a) + (0.5 * b) + (0.5 * c);
        d = sqrt(p*(p - a)*(p - b)*(p - c));
        ha = 2 * d / a;
        // augst
        cout << "Tristura augstums virsotnei a ir "<< ha << endl;
        hb = 2 * d / b;
        cout << "Tristura augstums virsotnei b ir "<< hb << endl;
        hc = 2 * d / c;
        cout << "Tristura augstums virsotnei c ir "<< hc << endl;
        // media
        ma = 0.5 * (sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2)));
        cout << "Tristura mediana virsotnei a ir " << ma << endl;
        mb = 0.5 * (sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2)));
        cout << "Tristura mediana virsotnei b ir " << mb << endl;
        mc = 0.5 * (sqrt(2 * pow(b, 2) + 2 * pow(a, 2) - pow(c, 2)));
        cout << "Tristura mediana virsotnei b ir " << mc << endl;
        //bisek
        ba = (2 * (sqrt((b * c * p) * (p - a)))) / (b + c);
        cout << "Tristura bisektrise virsotnei a " << ba << endl;
        bb = (2 * (sqrt((a * c * p) * (p - b)))) / (c + a);
        cout << "Tristura bisektrise virsotnei b " << bb << endl;
        bc = (2 * (sqrt((b * a * p) * (p - c)))) / (b + a);
        cout << "Tristura bisektrise virsotnei c " << bc << endl;
    }
    _getch;
}