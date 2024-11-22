#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x, y;

    cout <<"Program oblicza sume, roznice, iloczyn i iloraz dla liczb x i y\n";


    cout <<"Podaj liczbe x: ";
    cin >> x;
    cout <<"Podaj liczbe y: ";
    cin >> y;

    cout <<"\n";

    float suma = x+y;
    float roznica = x-y;
    float iloczyn = x * y;
    float iloraz;

    cout << fixed <<setprecision(2);
    cout << "Suma: \t\t" << x <<  " + " << y << " = " << suma << endl;
    cout << "Roznica: \t" << x << " - " << y << " = " << roznica << endl;
    cout << "Iloczyn: \t" << x << " * " << y << " = " << iloczyn << endl;
    
    if (y != 0) {
        iloraz = x / y;
        cout << "Iloraz: \t" << x << " / " << y << " = " << iloraz << endl;
    }
    else {
        cout <<"Iloraz: Podales 0. Nie mozna dzielic przez 0.\n";
    }


    return 0;
}