#include <stdio.h>

void convert(int *secs, int *hrs, int *mins, int *newsecs) {
    *hrs = (*secs) / 3600;
    *mins = (*secs % 3600) / 60;
    *newsecs = (*secs) % 60;
}

int main() {
    int secs, hrs = 0, mins = 0, newsecs = 0;

    printf("Ingrese la cantidad de segundos que quiere convertir: ");
    scanf("%d", &secs);

    convert(&secs, &hrs, &mins, &newsecs);

    printf("\nEquivale a %d horas, %d minutos, %d segundos\n", hrs, mins, newsecs);
}