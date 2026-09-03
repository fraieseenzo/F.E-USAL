#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char fraseA[20];
    char fraseB[20];
    char fraseAB[40];
    int i = 0;
    int j = 0;

    printf("Ingrese la primera frase: ");
    fgets(fraseA, 20, stdin);
    fflush(stdin);
    printf("Ingrese la segunda frase: ");
    fgets(fraseB, 20, stdin);
    fflush(stdin);

    for(i=0; i<strlen(fraseA); i++){
        fraseA[i] = toupper(fraseA[i]);
        if(fraseA[i] != 'A' && fraseA[i] != 'E' && fraseA[i] != 'I' && fraseA[i] != 'O' && fraseA[i] != 'U'){
            fraseAB[j] = fraseA[i];
            j++;
        } 
    }

    fraseAB[j] = '-'; 
    j++;

    for(i=0; i<strlen(fraseB); i++){
        fraseB[i] = toupper(fraseB[i]);
        if(fraseB[i] != 'A' && fraseB[i] != 'E' && fraseB[i] != 'I' && fraseB[i] != 'O' && fraseB[i] != 'U'){
            fraseAB[j] = fraseB[i];
            j++;
        } 
    }
    fflush(stdin);
    printf("Frase combinada: %s\n", fraseAB);   
}