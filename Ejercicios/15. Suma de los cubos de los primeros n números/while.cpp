#include <iostream>

using namespace std;

int sumaCuboPrimerosNNaturales(int n) {
    int suma = 0;
    cout << "Proceso de suma de los cubos de los primeros " << n << " numeros naturales:" << endl;
    int i = 1; // Inicializamos el contador fuera del bucle
    while (i <= n) {
        if (i != 1) {
            cout << " + ";
        }
        cout << i << "^3";
        suma += i * i*i;
        i++; // Incrementamos el contador en cada iteración
    }
    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaCubo = sumaCuboPrimerosNNaturales(n);
    cout << "La suma de los cubos de los numeros es: " << sumaCubo << endl;

    return 0;
}
