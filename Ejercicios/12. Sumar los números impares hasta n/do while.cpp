#include <iostream>

using namespace std;

int sumarImparesHastaN(int n) {
    int suma = 0;
    int i = 1; // Inicializamos i fuera del bucle

    cout << "Proceso de suma de numeros impares hasta " << n << ":" << endl;
    do {
        if (i != 1) {
            cout << " + ";
        }
        cout << i;
        suma += i;
        i += 2; // Incrementamos i dentro del bucle
    } while (i <= n);

    cout << endl;
    return suma;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int sumaImpares = sumarImparesHastaN(n);
    cout << "La suma de los numeros impares hasta " << n << " es: " << sumaImpares << endl;

    return 0;
}
