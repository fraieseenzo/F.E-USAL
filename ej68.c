#include <stdio.h>

#define MAX 100

int main() {
    char plan[MAX];   
    double monto[MAX];
    int id[MAX];
    int continuar = 1;
    int i = 0;
    int cantMor = 0;
    int total = 0;

    while (i < MAX && continuar == 1) {
        printf("Ingrese la letra del plan (B, P o S): ");
        scanf(" %c", &plan[i]); 

        printf("Ingrese el monto de deuda: ");
        scanf("%lf", &monto[i]);
        
        id[i] = i + 1;
        i++;
        total = i;

        printf("¿Desea continuar? (1/0): ");
        scanf("%d", &continuar);
    }

    printf("\n--- Reporte de Deudas ---\n");
    for(int j = 0; j < total; j++) {
        if (monto[j] < 10000) {
            cantMor++;
        }
        printf("ID: %d | Plan: %c | Monto: %.2f\n", id[j], plan[j], monto[j]);
    }

    printf("\nCantidad de morosos con deuda menor a 10000: %d\n", cantMor);

    return 0;
}