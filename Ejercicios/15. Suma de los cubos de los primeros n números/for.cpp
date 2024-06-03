#include <iostream>

using namespace std;

int sumaCubosPrimerosNNaturales(int n) {
    int suma = 0;
    cout << "Proceso de suma de los cubos de los primeros " << n << " numeros naturales:" << endl;
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " + ";
        }
        cout << i << "^3";
        suma += i * i * i;
    }
    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaCubos = sumaCubosPrimerosNNaturales(n);
    cout << "La suma de los cubos de los numeros es: " << sumaCubos << endl;

    return 0;
}
