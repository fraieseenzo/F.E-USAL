#include <stdio.h>

int main() {
    int fordSale = 0, currFord = 0, chevySale = 0, currChevy = 0, i;

    for(i = 0; i < 7; i++) {
        printf("Ford - Dia %d: ", i + 1);
        scanf("%d", &currFord);
        while(currFord < 0) {
            puts("Error. Ingrese un numero positivo: ");
            scanf("%d", &currFord);
        }
        fordSale += currFord;
    }

    i = 0; 
    do {
        printf("Chevrolet - Dia %d: ", i + 1);
        scanf("%d", &currChevy);

        if(currChevy >= 0) {
            chevySale += currChevy;
            i++; 
        } else {
            puts("La cantidad debe ser mayor o igual a cero.");
        }
    } while (i < 7);

    printf("\nTotal Ford: %d", fordSale);
    printf("\nTotal Chevrolet: %d\n", chevySale);

    return 0;
}