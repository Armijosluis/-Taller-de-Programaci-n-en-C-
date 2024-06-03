#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    
    int originalNum = num; // Guardar el número original para mostrar al final
    
    cout << "El numero en reversa es: ";
    do {
        int digit = originalNum % 10; // Obtener el último dígito
        cout << digit; // dígito inverso
        originalNum /= 10; // Eliminar el último dígito
    } while (originalNum > 0); // Condición de salida del bucle

    return 0;
}
