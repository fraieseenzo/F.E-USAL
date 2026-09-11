#include <stdio.h>
#define FILAS 10
#define COLUMNAS 2

float calcularPerimetro(float base, float altura) {
    float resultado;
    resultado = (2 * base) + (2 * altura);
    return resultado;
}

int main () {
    float rectangulos[FILAS][COLUMNAS];
    float perimetro;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Rectangulo %d: ", i + 1);
            if (j == 0) {
                printf("\nIngrese la base: ");
            } else printf("\nIngrese la altura: ");

            scanf("%f", &rectangulos[i][j]);
        }
    }

    for (int i = 0; i < FILAS; i++) {
        if (rectangulos[i][1] < rectangulos[i][0]) {
            perimetro = calcularPerimetro(rectangulos[i][0], rectangulos[i][1]);

            printf("\nRectangulo %d: Base: %.2f, Altura: %.2f, Perimetro: %.2f\n", i + 1, rectangulos[i][0], rectangulos[i][1], perimetro);
        }
    }
}