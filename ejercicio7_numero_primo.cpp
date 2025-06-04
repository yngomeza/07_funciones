#include <iostream>
using namespace std;

int esPrimo(int n) {
    if (n <= 1) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int numero;
    cout << "Ingresa un número entero positivo: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }

    return 0;
}
