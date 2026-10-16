#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inversa(const char *frase, char *newfrase) {
    int len = strlen(frase);
    const char *end = frase + len - 1;
    char *dest = newfrase;

    while (end >= frase) {
        *dest = *end;
        dest++;
        end--;
    }
    *dest = '\0';
}

int main() {
    // Definimos una cadena base o podemos leerla dinámicamente
    const char *input = "sigma";
    int len = strlen(input);

    // Asignación dinámica de memoria para 'frase' y 'newfrase' (+1 para el '\0')
    char *frase = (char *)malloc(len + 1);
    char *newfrase = (char *)malloc(len + 1);

    if (frase == NULL || newfrase == NULL) {
        fprintf(stderr, "Error de asignación de memoria\n");
        return 1;
    }

    // Copiamos el contenido a la memoria dinámica reservada
    strcpy(frase, input);

    inversa(frase, newfrase);

    printf("Original: %s\n", frase);
    printf("Inversa:  %s\n", newfrase);

    // Liberamos la memoria reservada para evitar fugas de memoria
    free(frase);
    free(newfrase);

    return 0;
}