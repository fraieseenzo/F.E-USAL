#include <stdio.h>
#define TAM 5

int main() {
    float total[TAM];
    float suma = 0;
    float promedio = 0;

    printf("Ingrese %d numeros:\n", TAM);
    for(int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &total[i]); 
        suma += total[i];
    }

    promedio = suma / TAM;
    printf("\nEl promedio es: %.2f\n", promedio);

    return 0;
}