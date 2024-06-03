#include <iostream>

void fibonacci(int n) {
    int a = 0, b = 1;
    std::cout << "Serie de Fibonacci: ";
    
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
}

int main() {
    int n;
    std::cout << "Ingrese el numero de elementos que desea generar: ";
    std::cin >> n;
    
    fibonacci(n);
    
    return 0;
}
