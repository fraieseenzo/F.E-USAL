#include <stdio.h>

int main() {
    int emp1Sale = 0, emp2Sale = 0, currEmp1 = 0, currEmp2 = 0, i;

    for(i = 0; i < 6; i++) {
        printf("Neo - Dia %d: ", i + 1);
        scanf("%d", &currEmp1);
        while(currEmp1 < 0) {
            puts("Error. Ingrese un numero positivo: ");
            scanf("%d", &currEmp1);
        }
        emp1Sale += currEmp1;
    }

    i = 0; 
    do {
        printf("Morfeo - Dia %d: ", i + 1);
        scanf("%d", &currEmp2);

        if(currEmp2 >= 0) {
            emp2Sale += currEmp2;
            i++; 
        } else {
            puts("La cantidad debe ser mayor o igual a cero.");
        }
    } while (i < 6);

    if (emp1Sale > emp2Sale) {
        printf("Neo vendio mas que Morfeo, teniendo %d ventas.", emp1Sale);
    } else printf("Morfeo vendio mas que Neo, teniendo %d ventas.", emp2Sale);

    return 0;
}


