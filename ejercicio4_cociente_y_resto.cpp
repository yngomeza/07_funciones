#include <iostream>
using namespace std;

int dividir(int num1, int num2) {

    int mayor = num1;
    int menor = num2;
    if (num1 < num2) {
        mayor = num2;
        menor = num1;
    }

    int cociente = 0;
    while (mayor >= menor) {
        mayor -= menor;
        cociente++;
    }

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << mayor << endl;
}

int main() {
    int a, b;
    
    cout << "Ingresa dos numeros enteros positivos" << endl;
    cout << "Primer numero: ";
	cin >> a;
	cout << "Segundo numero: ";
	cin >> b;

    dividir(a, b);

    return 0;
}
