#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout << "Wzor rownania kwadratowego ma postac:\nax^2 + bx + c = 0" << endl;

    double a, b, c;
    
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    cout << "Teraz rownanie ma postac:\n" << a <<"x^2 + " << b << "x + " << c <<" = 0" << endl;

    double delta = (b * b) - (4 * a * c);

    if (delta > 0){
        double pierwiastek = sqrt(delta);
        double x1 =( -b + pierwiastek) / (2 * a);
        double x2 =( -b - pierwiastek) / (2 * a);
        cout <<"Rownanie ma dwa rozwiazania:\nx1 = " << x1 << "\n" << "x2 = " << x2 << endl;

    }
    else if (delta == 0){
        double x = -b / (2 * a);
        cout <<"Rownanie ma jedno rozwiazanie: " << x << endl;
    }
    else {
        cout <<"Brak rozwiazan rzeczywistych." << endl;
    }

    return 0;
}