#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
   
    int z = 0;
    int A = 1;
    int B = 1.5;
    int C = 2;
    int D = 2.5;
    int E = 3;
    int F = 4;
    float soucet = 0;
    char znamka = 0;

    zacatek:
    cout << "\nZadejte počet známek."<<endl;
    cin >> z;
    if (z <= 0) {
        cout << "\nŠpatně zadaný vstup!" << endl;
        goto zacatek;
    }

    cout << "\nZadejte jaké známky chcete zadat. (A-F)\nA - 1 (výborně)\nB - 1.5 (velmi dobře)\nC - 2 (dobře)\nD - 2.5 (uspokojivě)\nE - 3 (vyhovující)\nF - 4 (nevyhovující)" << endl;

    for (int zn = 0; zn < z; zn++) {
        cout << "\nJakou známku chcete zadat?" << endl;
        cin >> znamka;
        switch (znamka) {
            case'A': {
                (soucet += A);
                break;
            }
            case'B': {
                (soucet += B);
                break;
            }
            case'C': {
                (soucet += C);
                break;
            }
            case'D': {
                (soucet += D);
                break;
            }
            case'E': {
                (soucet += E);
                break;
            }
            case'F': {
                (soucet += F);
                break;
            }
            default: {
                cout << "\nŠpatně zadaná známka!" << endl;
                zn -= 1;
            }
        }
    }
    cout << "\nAritmetický průměr těchto známek je: " << (soucet / z) <<"."<< endl;
}
