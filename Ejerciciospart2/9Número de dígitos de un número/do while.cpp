#include <iostream>
#include <string>

using namespace std;

int contarDigitos(const string& texto) {
    int contador = 0;
    int index = 0;
    do {
        if (isdigit(texto[index])) {
            contador++;
        }
        index++;
    } while (index < texto.length());
    return contador;
}

int main() {
    string entrada;
    cout << "Ingresa una cantidad: ";
    getline(cin, entrada);
    
    int digitos = contarDigitos(entrada);
    cout << "El numero de digitos es: " << digitos << endl;

    return 0;
}

