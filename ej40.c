#include <stdio.h>
#define DIAS 5

int main(){
    int alumnos = 0, i, alumnDay;
    for ( i = 0; i < DIAS; i++)
    {
        printf("Ingrese el numero de alumnos el dia %d: \n", i+1);
        scanf("%d", &alumnDay);

        while (alumnDay < 0)
        {
            printf("El numero de alumnos no puede ser negativo, ingrese nuevamente el numero de alumnos el dia %d: \n", i+1);
            scanf("%d", &alumnDay);
        }

        alumnos += alumnDay;
    }

    printf("El numero total de alumnos en la semana es: %d \n", alumnos);
    return 0;
}