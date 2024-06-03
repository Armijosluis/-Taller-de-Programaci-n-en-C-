#include <iostream>

int main() {
    int numero;
    unsigned long long factorial = 1;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    std::cout << "Factorial de " << numero << " = ";

    int i = 1; // Inicialización del contador fuera del bucle
    do {
        factorial *= i;
        if (i != 1) {
            std::cout << " * "; // Muestra el signo de multiplicación
        }
        std::cout << i; // Muestra el número actual
        i++; // Incrementa el contador
    } while (i <= numero); // Condición de salida del bucle

    std::cout << " = " << factorial << std::endl;

    return 0;
}
