#include <iostream>

using namespace std;

int sumaCuadradosPrimerosNNaturales(int n) {
    int suma = 0;
    int i = 1;
    cout << "Proceso de suma de los cuadrados de los primeros " << n << " numeros naturales:" << endl;

    do {
        if (i != 1) {
            cout << " + ";
        }
        cout << i << "^2";
        suma += i * i;
        i++;
    } while (i <= n);

    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaCuadrados = sumaCuadradosPrimerosNNaturales(n);
    cout << "La suma de los cuadrados de los numeros es: " << sumaCuadrados << endl;

    return 0;
}
