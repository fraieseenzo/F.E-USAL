#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int array[10];
    int donde = -1;
    int i = 0;
    int num = 0;

    for(i=0;i<10;i++){
        array[i] = rand() % 100;
        printf("%d \n", array[i]);
    }
    
    do {
        printf("Ingrese un numero entre 0 y 100: ");
        scanf("%d", &num);
    } while (num < 0 || num > 100);

    i = 0; /* reiniciar el índice antes de buscar */

    while (donde == -1 && i < 10) {
        if (array[i] == num) {
            donde = i;
        }
        i++;
    }

    if (donde != -1) {
        printf("El numero %d no se encuentra en el array.\n", num);
    } else {
        printf("El numero %d se encuentra en la posicion %d del array.\n", num, donde + 1);
    }

    return 0;
}