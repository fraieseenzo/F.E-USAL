#include <stdio.h>

int main(){
    int nNums, i;
    double mean, sum = 0, currentNum;
    
    do {
        puts("Ingrese la cantidad de numeros: ");
        scanf("%d", &nNums);
        if(nNums <= 0) puts("La cantidad tiene que ser mayor a 0.");
    } while (nNums <= 0);
    
    for (i = 0; i < nNums; i++) {
        printf("Ingrese los numeros para calcular su promedio:");
        scanf("%lf", &currentNum);
        sum += currentNum;
    }
    
    mean = sum / nNums;
    printf("%lf", mean);

    return 0;
}