#include <stdio.h>
#define FILAS 4
#define COLUMNAS 5

void pedir(double matrix[][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese un double para la fila %d columna %d: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }
}

void minmax(double matrix[][COLUMNAS], double *min, double *max) {
    *min = matrix[0][0];
    *max = matrix[0][0];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matrix[i][j] > *max) {
                *max = matrix[i][j];
            }
            if (matrix[i][j] < *min) {
                *min = matrix[i][j];
            }
        }
    }

    printf("\nEl numero minimo de la matriz es %.2lf y el maximo es %.2lf\n", *min, *max);
}

int main() {
    double matrix[FILAS][COLUMNAS];
    double min, max;

    pedir(matrix);
    minmax(matrix, &min, &max);

    return 0;
}