#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    int i = 2; // Inicializamos i fuera del bucle
    do {
        if (numero % i == 0) {
            return false;
        }
        i++; // Incrementamos i dentro del bucle
    } while (i <= numero / 2);

    return true;
}

int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    
    if (esPrimo(numero)) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }

    return 0;
}
