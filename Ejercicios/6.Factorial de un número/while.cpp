#include <iostream>

int main() {
    int numero;
    unsigned long long factorial = 1;

    // Solicito al usuario que ingrese un número
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    // Muestro un mensaje indicando que calcularé el factorial del número ingresado
    std::cout << "Factorial de " << numero << " = ";

    // Inicializo la variable de control del bucle
    int i = 1;
    // Utilizo un bucle while para calcular el factorial
    while (i <= numero) {
        factorial *= i;
        // Muestro el signo de multiplicación solo después del primer número
        if (i != 1) {
            std::cout << " * ";
        }
        // Muestro el número actual en el factorial
        std::cout << i;

        // Incremento la variable de control del bucle
        i++;
    }

    // Muestro el resultado del factorial
    std::cout << " = " << factorial << std::endl;

    return 0;
}
