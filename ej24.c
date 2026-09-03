#include <stdio.h>
#include <ctype.h>

int main() {
    char check;

    do {
        printf("Ingrese un caracter: ");
        check = getchar();
        
        // limpiar buffer
        while (getchar() != '\n'); 

        if (isspace(check)) {
            puts("El caracter ingresado es un espacio.");
        } else {
            printf("El caracter '%c' no es un espacio.\n", check);
        }

    } while (!isspace(check));

    return 0;
}