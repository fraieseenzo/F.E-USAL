#include <stdio.h>
#define TOTAL_DEPTS 40

int main(){
    int dpts = 40, i, curr;

    for(i = 0; i < TOTAL_DEPTS; i++){
        printf("Departamento %d, ¿está señado? ¿vendido? (Responda: 1 = SI, 0 = NO): ", i + 1);
        scanf("%d", &curr);
        if(curr == 1){
            printf("Departamento %d está señado o vendido.\n", i + 1);
            dpts--;
        } else {
            printf("Departamento %d no está señado ni vendido.\n", i + 1);
        }
        while (curr != 0 && curr != 1)
        {
            printf("Entrada inválida. Por favor, ingrese 1 para SÍ o 0 para NO: ");
            scanf("%d", &curr);
        }
    }
    
    printf("Número total de departamentos disponibles: %d\n", dpts);
    return 0;
}