#include <iostream>

using namespace std;

float productoSerieFraccionarios(int n) {
    float producto = 1.0;
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " * ";
        }
        cout << "1/" << i;
        producto *= 1.0 / i;
    }
    cout << endl;
    return producto;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    float producto = productoSerieFraccionarios(n);
    cout << "El producto de la serie\n"<< "es: " << producto << endl;

    return 0;
}
