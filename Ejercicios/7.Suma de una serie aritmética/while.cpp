#include <iostream>

int main() {
    int n;
    int suma = 0;
    int i = 1; // Inicializar el contador

    // Solicitar al usuario el número de términos
    std::cout << "Ingrese el numero de terminos: ";
    std::cin >> n;

    // Calcular la suma de la serie aritmética y mostrar cada término
    std::cout << "Suma de la serie aritmetica: ";
    while (i <= n) {
        suma += i;
        std::cout << i;
        if (i < n) {
            std::cout << " + ";
        } else {
            std::cout << " = ";
        }
        i++; // Incrementar el contador dentro del bucle
    }

    // Mostrar la suma total
    std::cout << suma << std::endl;

    return 0;
}
