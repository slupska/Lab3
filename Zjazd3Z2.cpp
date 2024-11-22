#include <iostream>
using namespace std;

int main(){
    char litera;

    
    do {
        cout << "Podaj litere: ";
        cin >> litera;
        cout << litera << endl;
    }
    while (litera != 't');

    cout <<"Napisales \"t\". Koniec programu.";


    return 0;
}