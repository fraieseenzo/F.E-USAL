#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MI_SIGNO "CAPRICORNIO"

int main() {
    char nombre[50];
    char signo[30];

    printf("Ingrese su nombre: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    printf("Ingrese su signo zodiacal: ");
    fgets(signo, 30, stdin);
    signo[strcspn(signo, "\n")] = '\0';

    for (int i = 0; signo[i] != '\0'; i++) {
        signo[i] = toupper((unsigned char)signo[i]);
    }

    if (strcmp(signo, MI_SIGNO) == 0) {
        printf("Bravo, %s! eres de %s como yo.\n", nombre, MI_SIGNO);
    } else {
        printf("Hola, %s. Es una pena que no seas de %s como yo.\n", nombre, MI_SIGNO);
    }

    return 0;
}