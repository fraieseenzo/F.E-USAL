#include <stdio.h>
#include <stdlib.h> 
#define INTENTOS 10

int main(){
    int x = rand() % 20;
    int guess, i;
  
    puts("Tenes 10 intentos para adivinar un numero aleatorio. \n");
    for(i = 0; i < INTENTOS; i++) {
        puts("Ingrese su numero: ");
        scanf(" %d", &guess);
        if (guess < 20 && guess > 0) {
           if(guess == x) {
             printf("%d es el numero correcto!", guess);
             return 1;
            } else puts("El numero es incorrecto."); 
        } else {
            puts("El numero debe estar entre 0 y 20");
            i--;
        }
    }
    printf("Agotaste todos tus intentos.");
}