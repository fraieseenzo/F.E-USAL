#include <stdio.h>

int main(){
    int cine, teatro, concierto;
    
    puts("¿Fue al cine en el último anio? (1 = SI, 0 = NO)");
    scanf("%d", &cine);
    puts("¿Fue al teatro en el último anio? (1 = SI, 0 = NO)");
    scanf("%d", &teatro);
    puts("¿Fue a un concierto en el último anio? (1 = SI, 0 = NO)");
    scanf("%d", &concierto);
    
    if(cine == 1 && teatro == 1 && concierto == 1){
        puts("¡Usted es un amante del arte!");
    } else if(cine == 0 && teatro == 0 && concierto == 0){
        puts("¡Usted no es un amante del arte!, intente probar.");
    } else {
        puts("¡Usted es un aficionado al arte!, siga disfrutando.");
    }

    return 0;
}