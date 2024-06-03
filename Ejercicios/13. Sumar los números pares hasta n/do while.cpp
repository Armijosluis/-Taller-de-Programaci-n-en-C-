#include <iostream>

using namespace std;

int sumarParesHastaN(int n) {
    int suma = 0;
    int i = 2; // Inicializamos i fuera del bucle

    cout << "Proceso de suma de numeros pares hasta " << n << ":" << endl;
    do {
        if (i != 2) {
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
    
    int sumaPares = sumarParesHastaN(n);
    cout << "La suma de los numeros pares hasta " << n << " es: " << sumaPares << endl;

    return 0;
}
