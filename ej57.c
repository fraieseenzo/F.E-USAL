#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    float totales[TAM];

    for(int i = 0; i < TAM; i++){
        totales[i] = rand();
        printf("%f\n", totales[i]);
    }

    return 0;
}