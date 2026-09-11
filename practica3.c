#include <stdio.h>
#define OPERACIONES 5

typedef struct {
    char tipoOp;
    double montoOp;
} t_op;

double calcularPorcentaje(double total, double extraccion) {
    double porc = (extraccion * 100) / total;
    return porc;
}

int main() {
    t_op ops[OPERACIONES];
    double total = 0, extraccion = 0;

    for (int i=0; i < OPERACIONES; i++) {
        printf("Operacion N: %d\n", i + 1);

        printf("Ingrese el tipo de operacion (D deposito | E extraccion | O otro): ");
        scanf(" %c", &ops[i].tipoOp);
        total++;

        if (ops[i].tipoOp != 'O' && ops[i].tipoOp != 'o') {
            printf("\nIngrese el monto: ");
            scanf("%lf", &ops[i].montoOp);
            if (ops[i].tipoOp == 'E' || ops[i].tipoOp == 'e') {
                extraccion++;
            }
        }
    }

    printf("El porcentaje de operaciones que son extracciones es de: %.2lf", calcularPorcentaje(total, extraccion));

    return 0;
}
