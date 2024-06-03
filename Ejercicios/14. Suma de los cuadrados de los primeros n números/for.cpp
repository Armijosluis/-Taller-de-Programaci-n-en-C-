#include <iostream>

using namespace std;

int sumaCuadradosPrimerosNNaturales(int n) {
    int suma = 0;
    cout << "Proceso de suma de los cuadrados de los primeros " << n << " numeros naturales:" << endl;
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " + ";
        }
        cout << i << "^2";
        suma += i * i;
    }
    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaCuadrados = sumaCuadradosPrimerosNNaturales(n);
    cout << "La suma de los cuadrados de los numeros  es: " << sumaCuadrados << endl;

    return 0;
}
