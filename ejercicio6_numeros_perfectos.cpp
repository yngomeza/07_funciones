#include <iostream>
using namespace std;

int esPerfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            suma += i;
    }
    
    return suma == n;
}

int main() {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;

    if (esPerfecto(num))
        cout << num << " es un numero perfecto." << endl;
    else
        cout << num << " no es un numero perfecto." << endl;

    return 0;
}
