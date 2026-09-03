#include <stdio.h>
#define MAX_OPERACIONES 10

int main(){
    int deposito = 0, retiro = 0, monto, eleccion, i;

    for(i = 0; i < MAX_OPERACIONES; i++){
        puts("¿Desea hacer un deposito o un retiro? (1 = DEPOSITO, 2 = RETIRO)");
        scanf("%d", &eleccion);

        while (eleccion != 1 && eleccion != 2){
            puts("Opcion no valida, intente de nuevo.");
            puts("¿Desea hacer un deposito o un retiro? (1 = DEPOSITO, 2 = RETIRO)");
            scanf("%d", &eleccion);
        }

        if (eleccion == 1){
            puts("Ingrese el monto a depositar:");
            scanf("%d", &monto);
            deposito += monto;
        }
        
        if (eleccion == 2){
            puts("Ingrese el monto a retirar:");
            scanf("%d", &monto);
            retiro += monto;
        } 
    }
    printf("Total depositado: %d\n", deposito);
    printf("Total retirado: %d\n", retiro);

    return 0;
}