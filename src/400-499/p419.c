/* Telesillas */
#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    return *((int*)elem1) - *((int*)elem2);
}

int main() {
    int max, n;
    int i, j;
    while(1) {
        scanf("%d %d", &max, &n);
        if(max == 0 && n == 0)
            return 0;
        int clientes[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &clientes[i]);
        }
        qsort(clientes, sizeof(clientes)/sizeof(*clientes), sizeof(*clientes), comp);
        i = 0;
        j = n-1;
        int res = 0;
        while(i < j) {
            if(clientes[i] + clientes[j] > max) {
                j--;
            } else {
                j--;
                i++;
            }
            res++;
        }
        if(i == j)
            res++;
        printf("%d\n", res);
    }
}