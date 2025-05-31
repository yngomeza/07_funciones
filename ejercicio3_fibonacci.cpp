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

int RestaFibonacci(int cantidad) {
    int a = 0, b = 1, siguiente, resta = 0;

    for (int i = 0; i < cantidad; ++i) {
        if (i == 0)
            resta = a;
        else
            resta = resta - a;

        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    return resta;
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
    int resta = RestaFibonacci(cantidad);
    
    cout << "Suma de los terminos: " << suma << endl;
	cout << "Resta de los terminos: " << resta << endl;
	
    return 0;
}
