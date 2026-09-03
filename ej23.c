#include <stdio.h>
#include <ctype.h>

int main() {
    char turno;

    do {
        printf("Ingrese su turno (M/T/N): ");
        scanf(" %c", &turno); 
        turno = toupper(turno);

        if (turno != 'M' && turno != 'T' && turno != 'N') {
            puts("Ingrese un turno valido.");
        }
    } while (turno != 'M' && turno != 'T' && turno != 'N');

    printf("Su turno es: %c\n", turno); 
    
    return 0;
}