/* Triángulos */
#include <stdlib.h>
#include <stdio.h>

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f < s) return -1;
    if (f > s) return 1;
    return 0;
}

int main() {
    int numCasos;
    long long lados[3];
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        scanf("%lld %lld %lld", &lados[0], &lados[1], &lados[2]);
        qsort(lados, sizeof(lados)/sizeof(*lados), sizeof(*lados), comp);
        if(lados[0] + lados[1] < lados[2]+1)
            printf("IMPOSIBLE\n");
        else if(lados[0]*lados[0] + lados[1]*lados[1] > lados[2]*lados[2])
            printf("ACUTANGULO\n");
        else if(lados[0]*lados[0] + lados[1]*lados[1] < lados[2]*lados[2])
            printf("OBTUSANGULO\n");
        else
            printf("RECTANGULO\n");
    }
    return 0;
}