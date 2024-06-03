#include <iostream>

void fibonacci(int n) {
    int a = 0, b = 1, i = 0;
    std::cout << "Serie de Fibonacci: ";
    
    do {
        std::cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
        i++;
    } while (i < n);
}

int main() {
    int n;
    std::cout << "Ingrese el numero de elementos que desea generar: ";
    std::cin >> n;
    
    fibonacci(n);
    
    return 0;
}
