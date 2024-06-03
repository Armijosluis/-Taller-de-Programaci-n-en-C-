#include <iostream>

int calcularNumeroTriangular(int n) {
    int triangular = 0;
    for (int i = 1; i <= n; ++i) {
        if (i != 1) {
            std::cout << " + ";
        }
        std::cout << i;
        triangular += i;
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
