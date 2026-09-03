#include <stdio.h>
#define MAX 100

int main(){
	int menu = -1;
	double montoDeuda[MAX];
	char plan[MAX], continuar = 'S';
	int cantMorosos = 0, i = 0;
	int cargas = 0;
	int cargaRealizada = 0;
		
	while(menu != 0){
		printf("Ingrese un numero: \n 1: Carga de datos. \n 2: Listado de datos. \n 3: Cantidad de morosos con deuda menor a 10000 ARS. \n 0: Salir. \n");
		scanf("%d", &menu);
		switch(menu){
			case 1: {
				while(continuar == 'S' && i < MAX){
					int isValid = 0;
		
					printf("Dia %d \n", i+1);
					puts("Ingrese el monto de deuda (Mayor a 0): ");
					scanf("%lf", &montoDeuda[i]);
					while(isValid == 0){
						if(montoDeuda[i] > 0) {isValid = 1;}
						else {puts("El monto de deuda debe ser mayor a 0, intente de nuevo: "); scanf("%lf", &montoDeuda[i]);}
					}
		
					if(montoDeuda[i] < 10000) cantMorosos++;
		
					isValid = 0;
		
					puts("\n Ingrese el plan de cuotas (B: básico, P:premium, S:social): ");
					scanf(" %c", &plan[i]);
					while(isValid == 0){
						if(plan[i] == 'B' || plan[i] == 'P' || plan[i] == 'S') {isValid = 1;}
						else {puts("\n Plan incorrecto, intente de nuevo: "); scanf(" %c", &plan[i]);}
					}
		
					isValid = 0;
					puts("\n Desea continuar? (S/N): ");
					scanf(" %c", &continuar);
					while(isValid == 0){
						if(continuar == 'S' || continuar == 'N') {isValid = 1;}
						else {puts("\n Entrada incorrecta, ingrese S o N: "); scanf(" %c", &continuar);}
					}
					
					cargaRealizada = 1;
					cargas++;
					i++;
				}	
	
				i = 0;
				
				break;
			}
			case 2: {
				if(cargaRealizada == 1){
					printf("CODIGO || MONTO DE DEUDA || PLAN \n");
					for(i=0; i<cargas; i++){
						printf("%d, %.2lf, %c \n", i+1, montoDeuda[i], plan[i]);
						}
					break;
				} else {printf("No existen datos para mostrar, por favor realice la carga de datos. \n"); break;}
		    }
			case 3: {printf("Cantidad: %d \n", cantMorosos); break;}
			case 0: {puts("Fin. \n"); break;}
			default: {puts("Error."); break;}
		}
	}
return 0;
}
