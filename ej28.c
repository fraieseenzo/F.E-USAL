#include <stdio.h>
#include <stdlib.h> 

int main(){
    int x = rand() % 10;
    int guess, i;

    for(i = 0; x != guess; i++) {
        puts("Ingrese su numero: ");
        scanf(" %d", &guess);
       if(guess == x) {
        printf("%d es el numero correcto!", guess);
        return 1;
       } else puts("El numero es incorrecto.");
    }
}