/* Carreras de coches */
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
    int numCasos, n, v;
    int i, j;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        scanf("%d %d", &n, &v);
        int pilas[n], res = 0;
        for(i = 0; i < n; i++) {
            scanf("%d", &pilas[i]);
        }
        qsort(pilas, sizeof(pilas)/sizeof(*pilas), sizeof(*pilas), comp);
        i = 0;
        j = n-1;
        while(i < j) {
            if(pilas[i] + pilas[j] >= v) {
                i++;
                j--;
                res++;
            } else
                i++;
        }
        printf("%d\n", res);
    }
    return 0;
}