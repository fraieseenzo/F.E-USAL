#include <stdio.h>

int main(){
    double minTemp, maxTemp, pastMean, currMean;
    puts("Ingrese la temperatura minima del dia de hoy: ");
    scanf("%lf", &minTemp);
    puts("Ingrese la temperatura maxima del dia de hoy: ");
    scanf("%lf", &maxTemp);
    puts("Ingrese la temperatura promedio del mismo dia pero el anio anterior: ");
    scanf("%lf", &pastMean);

    currMean = (minTemp + maxTemp) / 2;

    if(currMean > pastMean) {
        puts("La temperatura promedio de hoy es mayor a la del anio pasado. ");
    } else if (currMean == pastMean) {
        puts("La temperatura promedio de hoy es igual a la del anio pasado. ");
    } else puts("La temperatura promedio de hoy es menor a la del anio pasado. ");

    return 0;
}