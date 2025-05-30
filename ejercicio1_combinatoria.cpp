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
	
	c = (factorial(m) / (factorial(n) * factorial(m - n)));
	
	cout << " " << endl;
    cout << "C(" << m << ", " << n << ") = " << c << endl;

    return 0; 
}
