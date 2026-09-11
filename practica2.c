#include <stdio.h>
#define MAX 100

typedef struct {
    char nombre[MAX];
    char barrio[MAX];
    char turno;
} t_trabajadores;

int main () {
    int cant;
    printf("Ingrese la cantidad de trabajadores que va a cargar: ");
    if (scanf("%d", &cant) != 1 || cant <= 0) {
        printf("Cantidad no valida.\n");
        return 1;
    }

    t_trabajadores trabajador[cant];
    int cantM = 0, cantT = 0, cantN = 0;

    for (int i = 0; i < cant; i++) {
        printf("\n--- Trabajador %d ---\n", i + 1);
        printf("Ingrese nombre: ");
        scanf(" %99[^\n]", trabajador[i].nombre);
        printf("Ingrese barrio: ");
        scanf(" %99[^\n]", trabajador[i].barrio);
        printf("Ingrese turno (M/T/N): ");
        scanf(" %c", &trabajador[i].turno);

        if (trabajador[i].turno == 'M' || trabajador[i].turno == 'm') {
            trabajador[i].turno = 'M';
            cantM++;
        } else if (trabajador[i].turno == 'T' || trabajador[i].turno == 't') {
            trabajador[i].turno = 'T';
            cantT++;
        } else if (trabajador[i].turno == 'N' || trabajador[i].turno == 'n') {
            trabajador[i].turno = 'N';
            cantN++;
        }
    }

    char turnoMayor;
    int maxCant;

    if (cantM >= cantT && cantM >= cantN) {
        turnoMayor = 'M';
        maxCant = cantM;
    } else if (cantT >= cantM && cantT >= cantN) {
        turnoMayor = 'T';
        maxCant = cantT;
    } else {
        turnoMayor = 'N';
        maxCant = cantN;
    }

    printf("\nEl turno con el mayor numero de trabajadores es el '%c' con %d trabajadores.\n", turnoMayor, maxCant);
    printf("Trabajadores del turno '%c':\n", turnoMayor);

    for (int i = 0; i < cant; i++) {
        if (trabajador[i].turno == turnoMayor) {
            printf("Nombre: %s || Barrio: %s\n", trabajador[i].nombre, trabajador[i].barrio);
        }
    }

    return 0;
}