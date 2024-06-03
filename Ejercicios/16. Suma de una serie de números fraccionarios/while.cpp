#include <iostream>

using namespace std;

float sumaSerieFraccionarios(int n) {
    float suma = 0.0;
    
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " + ";
        }
        cout << "1/" << i;
        suma += 1.0 / i;
    }
    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    float suma = sumaSerieFraccionarios(n);
    cout << "La suma de la serie\n"<< " \nes: " << suma << endl;

    return 0;
}

