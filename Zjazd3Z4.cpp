#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbę wierszy trójkąta Pascala: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++) {
            cout << "  ";
        }

        int liczba = 1;

        for (int k = 0; k <= i; k++) {
            cout << liczba << "   ";

            liczba = liczba * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
