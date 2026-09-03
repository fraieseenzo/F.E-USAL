#include <stdio.h>
#include <ctype.h> // Biblioteca obligatoria para isalpha y tolower

int main() {
    char letra_objetivo;
    int letra_valida = 0; // Variable bandera (flag) para la validación
    int i = 0;
    int contador_coincidencias = 0;
    
    // Arreglo para almacenar cada palabra (50 caracteres + 1 para el terminador nulo '\0')
    char palabra[51]; 

    // 1. LECTURA Y VALIDACIÓN DE LA LETRA (Sin usar break)
    while (letra_valida == 0) {
        printf("Ingrese UNA letra: ");
        // Dejamos el espacio en blanco inicial para limpiar el buffer
        scanf(" %c", &letra_objetivo);

        // Usamos isalpha() para verificar que sea una letra del alfabeto
        if (isalpha(letra_objetivo)) {
            letra_valida = 1; // Cambia la condición para finalizar el bucle de forma limpia
        } else {
            printf("[ERROR] El caracter ingresado no es valido. Intente de nuevo.\n");
        }
    }

    printf("\nA continuacion, ingrese 5 palabras:\n");

    // 2. BUCLE DE CARGA FIJO (Usamos FOR porque sabemos de antemano que son exactamente 5)
    for (i = 0; i < 5; i++) {
        printf("Palabra %d: ", i + 1);
        // %50s lee una palabra consecutiva (se detiene ante un espacio o un Enter)
        scanf(" %50s", palabra);

        // Pasamos tanto la primera letra de la palabra (palabra[0]) como la letra buscada
        // a minúsculas mediante tolower() para cumplir con "No diferenciar mayusculas de minusculas"
        if (tolower(palabra[0]) == tolower(letra_objetivo)) {
            contador_coincidencias++;
        }
    }

    // 3. REPORTE FINAL
    printf("\n====================================================\n");
    printf("Resultados: %d palabras comienzan con la letra '%c'\n", contador_coincidencias, letra_objetivo);
    printf("====================================================\n");

    // Un solo return al final de la función main exigido por la cátedra
    return 0;
}
