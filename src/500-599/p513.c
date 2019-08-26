/* Empleado del año */
#include <stdio.h>

int main() {
    int numDias, acumulado, num;
    int i;
    while(1) {
        if(scanf("%d", &numDias) == EOF)
            return 0;
        i = 1;
        acumulado = 0;
        while(numDias--) {
            scanf("%d", &num);
            if(numDias == 0)
                printf("%d", i*num-acumulado);
            else
                printf("%d ", i*num-acumulado);
            acumulado = i*num;
            i++;
        }
        printf("\n");
    }
}