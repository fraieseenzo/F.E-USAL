#include <stdio.h>

typedef struct {
    char apellido[50];
    int nota1;
    int nota2;
} t_alumnos;

void cargar(t_alumnos alumno[], int cant) {
    for (int i = 0; i < cant; i++) {
        printf("Carga numero %d\n", i + 1);
        printf("Ingrese apellido: ");
        scanf("%s", alumno[i].apellido);
        printf("Ingrese nota 1: ");
        scanf("%d", &alumno[i].nota1);
        printf("Ingrese nota 2: ");
        scanf("%d", &alumno[i].nota2);
    }
}

float calcularPromedio(int n1, int n2) {
    float prom = (n1 + n2) / 2.0f;
    return prom;
}

int main() {
    int cant;
    float promedio;

    printf("Ingrese la cantidad de alumnos que va a procesar: ");
    scanf("%d", &cant);
    t_alumnos alumno[cant];

    cargar(alumno, cant);
    // Alumnos promocionados
    printf("\nAlumnos que promocionaron:\n");
    for (int i = 0; i < cant; i++) {
        if (alumno[i].nota1 >= 7 && alumno[i].nota2 >= 7) {
            promedio = calcularPromedio(alumno[i].nota1, alumno[i].nota2);
            printf("Apellido: %s, Promedio: %2.f\n", alumno[i].apellido, promedio);
        }
    }
}
