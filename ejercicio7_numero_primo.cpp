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

    do {
        cout << "Ingresa un número entero positivo (0 para salir): ";
        cin >> numero;

        if (numero == 0) {
            cout << "Programa finalizado." << endl;
            break;
        }

        if (esPrimo(numero)) {
            cout << numero << " es un número primo." << endl;
        } else {
            cout << numero << " no es un número primo." << endl;
        }

    } while (true);

    return 0;
}
