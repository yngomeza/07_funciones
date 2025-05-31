#include <iostream>
using namespace std;

int Fibonacci(int cantidad) {
    int a = 0, b = 1, sig, suma = 0;

    cout << "Serie de Fibonacci: ";

    for (int i = 0; i < cantidad; ++i) {
        cout << a << " ";
        suma = suma + a;
        sig = a + b;
        a = b;
        b = sig;
    }

    cout << endl;
    return suma;
}

int main() {
    int cantidad;
    
	cout << "Ingrese la cantidad de terminos de la serie de Fibonacci: ";
    cin >> cantidad;
    
    if (cantidad <= 0) {
        cout << "Debe ingresar un numero entero positivo." << endl;
        return 1;
    }

    int suma = Fibonacci(cantidad);
    cout << "Suma de los terminos: " << suma << endl;

    return 0;
}
