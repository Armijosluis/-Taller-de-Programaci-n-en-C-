#include <iostream>
#include <cmath>

int main() {
    int na;
    printf("Ingrese un numero: ");
    scanf("%d", &na);

    int menos = na;
    int x = 1;

    do {
        menos -= (x * x * x); // Restamos el cubo de x
        printf("%d", menos);
        if (menos > 0) {
            printf("-");
        }
        x++;
    } while (menos > 0);

    printf("\n");

    double ra = cbrt(na); // Calculamos la raíz cúbica

    printf("La raiz cubica es: %.2f\n", ra); // Imprimimos el resultado con dos decimales

    return 0;
}
