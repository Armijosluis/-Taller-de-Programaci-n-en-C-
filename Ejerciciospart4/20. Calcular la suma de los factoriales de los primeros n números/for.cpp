#include <iostream>

using namespace std;

int factorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int sumaFactorialesHasta(int num) {
    int suma = 0;
    for (int i = 1; i <= num; ++i) {
        suma += factorial(i);
    }
    return suma;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int resultado = sumaFactorialesHasta(numero);

    cout << "Suma de los factoriales hasta " << numero << " = ";
    for (int i = 1; i <= numero; ++i) {
        if (i == 1)
            cout << i << "!";
        else
            cout << " + " << i << "!";
    }
    cout << " = ";

    for (int i = 1; i <= numero; ++i) {
        if (i == 1)
            cout << factorial(i);
        else
            cout << " + " << factorial(i);
    }
    cout << " = " << resultado << endl;

    return 0;
}
