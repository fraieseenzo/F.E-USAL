#include <stdio.h>

int main(){
    int num, mult, i, res = 0;
    puts("Ingrese el primer numero: ");
    scanf(" %d", &num);
    puts("Ingrese el segundo numero: ");
    scanf(" %d", &mult);

    for(i=0; i < mult; i++) {
        res += num;
    }

    printf("El resultado de la multiplicacion es: %d", res);

    return 0;
}