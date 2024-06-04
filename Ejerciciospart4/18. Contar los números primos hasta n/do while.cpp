#include <iostream>
#include <vector>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    int i = 2;
    do {
        if (numero % i == 0) {
            return false;
        }
        i++;
    } while (i * i <= numero);
    return true;
}

std::vector<int> obtenerNumerosPrimosHastaN(int n) {
    std::vector<int> primos;
    int i = 2;
    do {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
        i++;
    } while (i <= n);
    return primos;
}

int main() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    
    std::vector<int> primos = obtenerNumerosPrimosHastaN(n);
    std::cout << "Numeros primos hasta " << n << ":" << std::endl;
    int indice = 0;
    do {
        std::cout << primos[indice] << " ";
        indice++;
    } while (indice < primos.size());
    std::cout << std::endl;

    int cantidadPrimos = primos.size();
    std::cout << "Hay " << cantidadPrimos << " numeros primos hasta " << n << std::endl;

    return 0;
}
