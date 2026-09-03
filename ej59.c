#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main(){
    int totales[TAM];

    for(int i = 0; i < TAM; i++){
        totales[i] = rand();
        printf("%d\n", totales[i]);
    }

    return 0;
}