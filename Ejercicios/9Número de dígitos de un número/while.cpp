#include <iostream>
#include <string>

using namespace std;

int contarDigitos(const string& texto) {
    int contador = 0;
    auto it = texto.begin();
    while (it != texto.end()) {
        if (isdigit(*it)) {
            contador++;
        }
        it++;
    }
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
