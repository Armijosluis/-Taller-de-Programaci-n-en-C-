#include <iostream>

int main() {
    int numero;
    int terms;

    std::cout << "Ingrese el primer numero de la serie: ";
    std::cin >> numero;
    std::cout << "Ingrese la cantidad de terminos de la serie: ";
    std::cin >> terms;

    std::cout << "Serie geometrica: \n";
    int currentTerm = numero;
    for(int i = 0; i < terms; ++i) {
        std::cout << currentTerm << " ";
        currentTerm *= numero;
    }

    int termsToMultiply;
    std::cout << "\nIngrese la cantidad de terminos que desea utilizar para calcular el producto: ";
    std::cin >> termsToMultiply;

    long long product = 1;
    currentTerm = numero;
    for(int i = 0; i < termsToMultiply; ++i) {
        product *= currentTerm;
        currentTerm *= numero;
    }

    std::cout << "Producto de los primeros " << termsToMultiply << " terminos: " << product << std::endl;

    return 0;
}


