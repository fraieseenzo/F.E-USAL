#include <stdio.h>

int main(){
    int num1, num2, num3, equal;

    puts("Ingrese el primer numero: ");
    scanf("%d", &num1);
    puts("Ingrese el primer numero: ");
    scanf("%d", &num2);
    puts("Ingrese el primer numero: ");
    scanf("%d", &num3);

    if(num1 == num2 == num3) {
        puts("Todos los numeros son iguales. ");
    } else if (num1 != num2 && num2 != num3) {
        puts("Todos los numeros son distintos. ");
    } else puts("Solo dos numeros son iguales. ");

    return 0;
}