#include <stdio.h>
#define TAM 15

int main(){
    float totales[TAM];

    for(int i = 0; i<TAM; i++){
        totales[i] = 0;
        printf("Recorriendo el array en %.2f\n", totales[i]);
    }

    return 0;
}