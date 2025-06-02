#include <iostream>
using namespace std;

int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            suma += i;
    }
    return suma;
}

int mostrarDivisores(int n) {
    cout << "Divisores propios de " << n << ": ";
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
    
    return 0;
}


int main() {
    int a, b;
    cout << "Ingresa dos numeros enteros positivos" << endl;
    cout << " " << endl;
    cout << "Primer numero: ";
	cin >> a;
	cout << "Segundo numero: ";
	cin >> b;
	cout << " " << endl;
	
    if (sumaDivisores(a) == b && sumaDivisores(b) == a)
        cout << a << " y " << b << " son numeros amigos." << endl;
    else
        cout << a << " y " << b << " no son numeros amigos." << endl;
	
	mostrarDivisores(a);
	mostrarDivisores(b);

    return 0;
}
