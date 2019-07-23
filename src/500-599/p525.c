/* Multas desde el cielo */
#include <stdio.h>

int main() {
    int numCasos, num1, num2, num3, num4, aux;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
        if(num1 > num2) {
            aux = num1;
            num1 = num2;
            num2 = aux;
        }
        if(num3 > num4) {
            aux = num3;
            num3 = num4;
            num4 = aux;
        }
        if(num3 < num1 && num4 > num1)
            printf("SOLAPADOS\n");
        else if(num1 == num3 && num4 > num1)
            printf("SOLAPADOS\n");
        else if((num1 < num3 && num3 < num2) && num4 > num1)
            printf("SOLAPADOS\n");
        else    
            printf("SEPARADOS\n");
    }
    return 0;
}