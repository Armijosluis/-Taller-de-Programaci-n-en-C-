#include <iostream>
#include <vector>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> obtenerNumerosPrimosHastaN(int n) {
    std::vector<int> primos;
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }
    return primos;
}

int main() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    
    std::vector<int> primos = obtenerNumerosPrimosHastaN(n);
    std::cout << "Numeros primos hasta " << n << ":" << std::endl;
    for (int primo : primos) {
        std::cout << primo << " ";
    }
    std::cout << std::endl;

    int cantidadPrimos = primos.size();
    std::cout << "Hay " << cantidadPrimos << " numeros primos hasta " << n << std::endl;

    return 0;
}
