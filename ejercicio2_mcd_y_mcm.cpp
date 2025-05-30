#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b) {
    return (a / mcd(a, b)) * b;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero positivo: ";
    cin >> num1;
    cout << "Ingresa el segundo numero positivo: ";
    cin >> num2;

    cout << "MCD(" << num1 << ", " << num2 << ") = " << mcd(num1, num2) << endl;
    cout << "MCM(" << num1 << ", " << num2 << ") = " << mcm(num1, num2) << endl;

    return 0;
}
