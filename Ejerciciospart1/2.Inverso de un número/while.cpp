#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    
    int originalNum = num; 
    int reversedNum = 0; // Inicializa el número invertido
    
    cout << "El numero en reversa es: ";
    while (originalNum > 0) {
        int digit = originalNum % 10; // Obtiene el último dígito del número original
        reversedNum = reversedNum * 10 + digit; // Construye el número invertido
        originalNum /= 10; // Elimina el último dígito del número original para evitar una secuencia infinita
    }
    
    cout << reversedNum << endl; // Imprime el número invertido
    
    return 0;
}
