//Transposicion de matriz 3x5 (ej18)

#include <stdio.h>

static void pedir(double matrixog[][5], int i, int j) {

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("\nIngrese un double para la fila %d columna %d pls: ", i + 1, j + 1);
            scanf("%lf", &matrixog[i][j]);
        }
    }
}

static void transpose(double matrixog[][5], double matrixnew[][3], int i, int j) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            matrixnew[j][i] = matrixog[i][j];
        }
    }
}

static void mostrar(double matrixnew[][3], int i, int j) {
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2lf ", matrixnew[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i = 3;
    int j = 5;

    double matrixog[i][j];
    double matrixnew[j][i];


    pedir(matrixog, i, j);
    transpose(matrixog, matrixnew, j, i);
    mostrar(matrixnew, i, j);

    return 0;
}