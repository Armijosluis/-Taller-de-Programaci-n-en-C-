#include <iostream>

int calcularNumeroTriangular(int n) {
    int triangular = 0;
    int i = 1;
    while (i <= n) {
        if (i != 1) {
            std::cout << " + ";
        }
        std::cout << i;
        triangular += i;
        i++;
    }
    std::cout << std::endl;
    return triangular;
}

int main() {
    int n;
    std::cout << "Ingrese un valor: ";
    std::cin >> n;
    
    int numeroTriangular = calcularNumeroTriangular(n);
    std::cout << "El numero triangular en la posicion es: " << numeroTriangular << std::endl;

    return 0;
}
