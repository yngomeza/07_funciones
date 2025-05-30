#include <iostream>
using namespace std;

	factorial(int n) {
     	int f = 1;
    for (int i = 2; i <= n; ++i) {
        f = f * i;
    }
    return f;
	}

int main() {
    int n, m, c;
    cout << "Ingresa m: ";
    cin >> m;
    cout << "Ingresa n: ";
    cin >> n;
	
	while (true) {
        cout << "Ingresa m (entero positivo): ";
        cin >> m;
        if (m >= 0) break;
        cout << "Error: m debe ser un entero positivo." << endl;
    }

    while (true) {
        cout << "Ingresa n (entero positivo, menor que m): ";
        cin >> n;
        if (n >= 0 && n < m) break;
        cout << "Error: n debe ser un entero positivo y menor que m." << endl;
    }
		
	c = (factorial(m) / (factorial(n) * factorial(m - n)));
	
	cout << " " << endl;
    cout << "C(" << m << ", " << n << ") = " << c << endl;

    return 0; 
}
