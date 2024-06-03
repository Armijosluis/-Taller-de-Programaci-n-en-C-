#include <iostream>

int main() {
    int base, exponente; // Variables para almacenar los valores ingresados por el usuario
    int resultado = 1; // Inicializamos resultado en 1 para la multiplicación

    // Solicitar al usuario que ingrese los valores de base y exponente
    printf("Ingrese el valor base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    // Calcular la potencia y mostrar el resultado
    int i = 0;
    while (i < exponente) {
        resultado *= base; // Multiplicar la base al resultado en cada iteración
        i++;
    }

    // Imprimir la operación de potenciación
    printf("Operacion de potenciacion:\n");
    int suma = 0;
    i = 0;
    while (suma < resultado) {
        printf("%d", base);
        suma += base;
        if (i < resultado / base - 1) {
            printf(" + "); // Solo imprime "+" si no es el último término
        }
        else if (exponente == 0) {
            base = 0;
            resultado = 0;
            printf("\nResultado = %d\n", resultado); 
            return 0; 
        }
        i++;
    }

    // Imprimir el resultado final
    printf("\nResultado = %d\n", resultado); // Muestra el resultado final

    return 0;
}
