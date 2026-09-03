// Fraiese | Turno M | Ej. 4

#include <stdio.h>
#define MAX 5

void carga(double montos[MAX], char medioPagos[MAX]) {
    for (int i = 0; i < MAX; i++) {
        int esValido = 0;

        while (!esValido) {
            printf("Ingrese el monto de la transacción %d: ", i + 1);
            if (scanf("%lf", &montos[i]) > 0) {
                esValido = 1;
            } else {
                printf("Entrada inválida. Intente nuevamente.\n");
                while (getchar() != '\n');
            }
        }

        esValido = 0;
        while (!esValido) {
            printf("\nIngrese el medio de pago de la transaccion %d (E (Efectivo), C (Credito)): ", i + 1);
            if (scanf(" %c", &medioPagos[i]) > 0) {
                if (medioPagos[i] == 'E' || medioPagos[i] == 'C') {
                    esValido = 1;
                } else {
                    printf("Entrada invalida. Intente nuevamente.\n");
                    while (getchar() != '\n');
                }
            }
        }

    }
}

void promedioEfectivo(double montos[MAX], char medioPagos[MAX]) {
    double totalPagos = 0;
    int cantidadPagos = 0;
    for (int i = 0; i < MAX; i++) {
        if (medioPagos[i] == 'E') {
            totalPagos += montos[i];
            cantidadPagos++;
        }
    }
    if (cantidadPagos == 0) {
        printf("No se realizaron pagos en efectivo.\n"); return;
    }
    printf("El promedio de pagos en efectivo es: %.2f\n", totalPagos / cantidadPagos);
}

void promedioCredito(double montos[MAX], char medioPagos[MAX]) {
    double totalPagos = 0;
    int cantidadPagos = 0;
    for (int i = 0; i < MAX; i++) {
        if (medioPagos[i] == 'C') {
            totalPagos += montos[i];
            cantidadPagos++;
        }
    }

    if (cantidadPagos == 0) {
        printf("No se realizaron pagos con crédito.\n"); return;
    }
    printf("El promedio de pagos en crédito es: %.2f\n", totalPagos / cantidadPagos);
}

void listadoCredito(double montos[MAX], char medioPagos[MAX]) {
    printf("Listado de transacciones con credito:\n");
    printf("Monto | Medio de Pago\n");
    for (int i = 0; i < MAX; i++) {
        if (medioPagos[i] == 'C') {
            printf("%.2f | %c\n", montos[i], medioPagos[i]);
        }
    }
}

void listadoEfectivo(double montos[MAX], char medioPagos[MAX]) {
    printf("Listado de transacciones con efectivo:\n");
    printf("Monto | Medio de Pago\n");
    for (int i = 0; i < MAX; i++) {
        if (medioPagos[i] == 'E') {
            printf("%.2f | %c\n", montos[i], medioPagos[i]);
        }
    }
}

void menu(double montos[MAX], char medioPagos[MAX]) {
    int menu = 1;
    while (menu != 0) {
        printf("Elija una opcion: \n1: Listado y promedio de transacciones con efectivo. \n2: Listado y promedio de transacciones con credito. \n0: Salir. \n");
        scanf("%d", &menu);

        switch (menu) {
            case 1: {listadoEfectivo(montos, medioPagos); promedioEfectivo(montos, medioPagos); break;}
            case 2: {listadoCredito(montos, medioPagos); promedioCredito(montos, medioPagos); break;}
            case 0: {printf("Saliendo del programa...\n"); break;}
            default: printf("Opción inválida. Intente nuevamente.\n"); break;
        }
    }
}

int main() {
    double montos[MAX];
    char medioPagos[MAX];

    carga(montos, medioPagos);
    menu(montos, medioPagos);

    return 0;
}
