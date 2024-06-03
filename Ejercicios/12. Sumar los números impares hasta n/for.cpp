#include <iostream>

using namespace std;

int sumarImparesHastaN(int n) {
    int suma = 0;
    cout << "Proceso de suma de numeros impares hasta " << n << ":" << endl;
    for (int i = 1; i <= n; i += 2) {
        if (i != 1) {
            cout << " + ";
        }
        cout << i;
        suma += i;
    }
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
