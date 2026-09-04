// Ejercicio 7 (N1) de modelo parcial TM, Fraiese

#include <stdio.h>
typedef struct {
    char apellido[50];
    int numLote;
    float superficie;
} t_barrio;

float input(t_barrio lote[], int cant) {
    int cargaValida = 0;
    float factura;

    do {
        float totalPctg = 0;

        for (int i = 0; i < cant; i++) {
            printf("\nCarga del lote N: %d\n", i+1);

            printf("Ingrese N de lote: ");
            scanf("%d", &lote[i].numLote);

            printf("\nIngrese Superficie de lote: ");
            scanf("%f", &lote[i].superficie);
            totalPctg += lote[i].superficie;

            printf("\nIngrese el apellido: ");
            scanf("%s", &lote[i].apellido);
        }

        if (totalPctg == 100) {
            cargaValida = 1;
        } else {
            printf("\nCarga incorrecta, volver a comenzar.\n");
        }
    } while (!cargaValida);

    printf("\nIngrese el monto de la factura AYSA: ");
    scanf("%f", &factura);

    return factura;
}

void listado(t_barrio lote[], int cant, int factura) {
    printf("\nLOTE || APELLIDO || PORCENTAJE || CANTIDAD A PAGAR\n");

    for (int i = 0; i < cant; i++) {
        float deuda = (lote[i].superficie * factura) / 100;
        printf("%d, %s, %f, %f\n", lote[i].numLote, lote[i].apellido, lote[i].superficie, deuda);
    }
}

int main() {
    int cant;
    float factura;

    puts("Ingrese la cantidad de lotes que va a procesar: ");
    scanf("%d", &cant);

    t_barrio lote[cant];

    factura = input(lote, cant);
    listado(lote, cant, factura);
}