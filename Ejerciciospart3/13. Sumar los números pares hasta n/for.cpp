#include <iostream>

using namespace std;

int sumarParesHastaN(int n) {
    int suma = 0;
    cout << "Proceso de suma de numeros pares hasta " << n << ":" << endl;
    for (int i = 2; i <= n; i += 2) {
        if (i != 2) {
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
    
    int sumaPares = sumarParesHastaN(n);
    cout << "La suma de los numeros pares hasta " << n << " es: " << sumaPares << endl;

    return 0;
}
