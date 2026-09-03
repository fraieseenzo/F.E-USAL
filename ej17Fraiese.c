#include <stdio.h>
#define FILAS 4
#define COLUMNAS 5

void pedir(double matrix[][COLUMNAS]) {
    int i = 0;
    int j = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("\nIngrese un double para la fila %d columna %d pls: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }
}

double max(double matrix[][COLUMNAS]) {
    int i = 0;
    int j = 0;
    double max = matrix[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    return max;
}

double min(double matrix[][COLUMNAS]) {
    int i = 0;
    int j = 0;
    double min = matrix[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    return min;
}

int main() {
    double matrix[FILAS][COLUMNAS];

    pedir(matrix);

    double maximo = max(matrix);
    double minimo = min(matrix);
    printf("El numero minimo de la matriz es %.2lf y el maximo es %.2lf\n", minimo, maximo);

    return 0;
}