/* Cálculo de la Mediana */
#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f < s) return -1;
    if (f > s) return 1;
    return 0;
}

int main() {
    int n;
    int i;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            return 0;
        int numeros[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &numeros[i]);
        }
        qsort(numeros, sizeof(numeros)/sizeof(*numeros), sizeof(*numeros), comp);
        if(n % 2) {
            printf("%d\n", numeros[n/2]*2);
        } else {
            printf("%d\n", numeros[n/2]+numeros[n/2-1]);
        }
    }
}