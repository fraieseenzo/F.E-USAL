#include <stdio.h>

int main(){
    double cashSat, cashSun;

    puts("Ingrese el dinero gastado el sábado:");
    scanf("%lf", &cashSat);

    puts("Ingrese el dinero gastado el domingo:");
    scanf("%lf", &cashSun);

    if(cashSat + cashSun > 50000){
        puts("Semana proxima tenes un descuento del 20 porciento en tu compra.");
    } else if (cashSat > 0 && cashSun > 0)
    {
        puts("Semana proxima tenes un descuento del 5 porciento en tu compra.");
    } else {
        puts("No tenes descuento para la próxima semana, pero seguí comprando con nosotros.");
    }

    return 0;
}