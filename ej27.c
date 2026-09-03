#include <stdio.h>

int main(){
    int base, exp, i, res = 1;
    puts("Ingrese la base: ");
    scanf(" %d", &base);
    puts("Ingrese el exponente: ");
    scanf(" %d", &exp);

    for(i=0; i < exp; i++) {
        res = res * base;
    }

    printf("El resultado de la potencia es: %d", res);

    return 0;
}