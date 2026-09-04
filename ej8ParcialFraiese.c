// Ejercicio 8 (N2) parcial TM, Fraiese

#include <stdio.h>
#include <stdbool.h>
#define PI 3.14

double calcularVolumen(float r) {
    int vol = 4/3 * PI * r;
    return vol;
}

int main () {
    float radio;
    bool continuar = false;

    do {
        char continuarChar;
        printf("Ingrese el radio: ");
        scanf("%f", &radio);

        printf("\nEl radio es: %f", calcularVolumen(radio));

        do {
            printf("\nDesea calcular otro volumen? (S o N): ");
            scanf(" %c", &continuarChar);
        } while(continuarChar != 'S' && continuarChar != 's' && continuarChar != 'N' && continuarChar != 'n');

        if (continuarChar == 'N' || continuarChar == 'n') {
            continuar = true;
        } else if (continuarChar == 'S' || continuarChar == 's') {
            continuar = false;
        }
    } while (continuar == false);
}