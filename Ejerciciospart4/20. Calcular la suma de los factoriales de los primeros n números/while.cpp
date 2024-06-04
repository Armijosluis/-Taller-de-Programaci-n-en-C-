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
    int i = 1;
    while (i <= num) {
        suma += factorial(i);
        i++;
    }
    return suma;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int resultado = sumaFactorialesHasta(numero);

    cout << "Suma de los factoriales hasta " << numero << " = ";
    int i = 1;
    while (i <= numero) {
        if (i == 1)
            cout << i << "!";
        else
            cout << " + " << i << "!";
        i++;
    }
    cout << " = ";

    i = 1;
    while (i <= numero) {
        if (i == 1)
            cout << factorial(i);
        else
            cout << " + " << factorial(i);
        i++;
    }
    cout << " = " << resultado << endl;

    return 0;
}

