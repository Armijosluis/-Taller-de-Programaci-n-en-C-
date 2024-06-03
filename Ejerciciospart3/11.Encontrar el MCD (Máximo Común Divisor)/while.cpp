#include <iostream>

int encontrarMCD(int a, int b) {
    int menor = (a < b) ? a : b;
    int mcd = 1;
    int i = 1;
    
    while (i <= menor) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
        i++;
    }
    
    return mcd;
}

int main() {
    int num1, num2;
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;
    
    int mcd = encontrarMCD(num1, num2);
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << std::endl;

    return 0;
}
