/* El mejor de dos dados */
#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f < s) return  1;
    if (f > s) return -1;
    return 0;
}

int main () {
    int numCaras, victorias1, victorias2;
    int i, j;
    while(1) {
        scanf("%d", &numCaras);
        if(numCaras == 0) break;
        int dado1[numCaras], dado2[numCaras];
        victorias1 = 0;
        victorias2 = 0;
        for(i = 0; i < numCaras; i++) {
            scanf("%d", &dado1[i]);
        }
        qsort(dado1, sizeof(dado1)/sizeof(*dado1), sizeof(*dado1), comp);
        for(i = 0; i < numCaras; i++) {
            scanf("%d", &dado2[i]);
        }
        qsort(dado2, sizeof(dado2)/sizeof(*dado2), sizeof(*dado2), comp);
        j = 0;
        for(i = 0; i < numCaras; i++) {
            for(; dado1[i] < dado2[j] && j < numCaras; j++) {
            }
            victorias1 = victorias1 + numCaras - j;
        }
        j = 0;
        for(i = 0; i < numCaras; i++) {
            for(; dado2[i] < dado1[j] && j < numCaras; j++) {
            }
            victorias2 = victorias2 + numCaras - j;
        }
        if(victorias1 > victorias2) {
            printf("PRIMERO\n");
        } else if(victorias1 == victorias2) {
            printf("NO HAY DIFERENCIA\n");
        } else {
            printf("SEGUNDO\n");
        }
    }
    return 0;
}