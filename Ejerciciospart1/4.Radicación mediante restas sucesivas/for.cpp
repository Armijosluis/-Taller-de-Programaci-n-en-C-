#include <iostream>
#include <cmath>

int main() {
    int na;
    printf("Ingrese un numero: ");
    scanf("%d", &na);

    int menos = na;

    for (int x = 1; menos > 0; x++) { // Cambiamos x += 2 por x++
        menos -= (x * x * x); // Restamos el cubo de x en lugar del cuadrado
        printf("%d", menos);
        if (menos > 0) {
            printf("-");
        }
    }

    printf("\n");

    double ra = cbrt(na); // Cambiamos sqrt() por cbrt()

    printf("La raiz cubica es: %.2f\n", ra); // Cambiamos el formato de salida para imprimir un número de punto flotante

    return 0;
}
