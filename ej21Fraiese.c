#include <stdio.h>
#include <stdbool.h>
#define CANT 4

typedef struct {
    int habitantes;
    int ambientes;
    bool electricidad;
    float consumo;
} t_censo;

void input(t_censo casa[]);
void menu(t_censo casa[]);
void servicioElectrico(t_censo casa[]);
void promedioPersonasAmbiente(t_censo casa[]);
void totalConsumo(t_censo casa[]);

void input(t_censo casa[]) {
    for (int i = 0; i < CANT; i++) {
        int tieneLuz;

        printf("\nCarga de vivienda N: %d\n", i + 1);
        do {
            printf("Ingresa los habitantes (Mayor o igual a 1): ");
            scanf("%d", &casa[i].habitantes);
        } while (casa[i].habitantes < 1);

        do {
            printf("\nIngresa los ambientes (Mayor o igual a 1): ");
            scanf("%d", &casa[i].ambientes);
        } while (casa[i].ambientes < 1);

        do {
            printf("\nTiene conexion al servicio electrico? (1 = si, 0 = no): ");
            scanf("%d", &tieneLuz);
        } while (tieneLuz != 0 && tieneLuz != 1);

        casa[i].electricidad = (bool)tieneLuz;

        if (casa[i].electricidad) {
            do {
                printf("\nIngrese el ultimo consumo en kWh (Mayor o igual a 0): ");
                scanf("%f", &casa[i].consumo);
            } while (casa[i].consumo < 0);
        } else {
            casa[i].consumo = 0.0f;
        }
    }
}

void menu(t_censo casa[]) {
    int opcion;

    do {
        printf("\n\n--- MENU DE OPCIONES ---\n");
        printf("1. Cuantas viviendas no tienen servicio electrico.\n");
        printf("2. Promedio de personas por ambiente para dormir.\n");
        printf("3. Total de consumo en kWh de menos de 1000.\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                servicioElectrico(casa);
                break;
            case 2:
                promedioPersonasAmbiente(casa);
                break;
            case 3:
                totalConsumo(casa);
                break;
            case 0:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion no valida\n");
                break;
        }
    } while (opcion != 0);
}

void servicioElectrico(t_censo casa[]) {
    int cantidad = 0;

    for (int i = 0; i < CANT; i++) {
        if (!casa[i].electricidad) {
            cantidad++;
        }
    }

    printf("\nCantidad de casas sin servicio electrico: %d", cantidad);
}

void promedioPersonasAmbiente(t_censo casa[]) {
    printf("\nCASA N | HABITANTES | AMBIENTES | PROMEDIO\n");
    for (int i = 0; i < CANT; i++) {
        float promedio = (float)casa[i].habitantes / casa[i].ambientes;
        printf("%d, %d, %d, %.2f\n", i + 1, casa[i].habitantes, casa[i].ambientes, promedio);
    }
}

void totalConsumo(t_censo casa[]) {
    float total = 0.0;

    for (int i = 0; i < CANT; i++) {
        if (casa[i].electricidad && casa[i].consumo < 1000.0f) {
            total += casa[i].consumo;
        }
    }

    printf("\nConsumo total de casas con luz y menor de 1000kWh: %.2f", total);
}

int main() {
    t_censo casa[CANT];

    input(casa);
    menu(casa);

    return 0;
}