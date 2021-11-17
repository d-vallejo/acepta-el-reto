/* Colección de calendarios de bolsillo */
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
    int numCasos, numCalendarios, res;
    int i;
    scanf("%d", &numCasos);
    while(numCasos--) {
        res = 0;
        scanf("%d", &numCalendarios);        
        int calendarios[numCalendarios];
        for(i = 0; i < numCalendarios; i++) {
            scanf("%d", &calendarios[i]);
        }
        qsort(calendarios, sizeof(calendarios)/sizeof(*calendarios), sizeof(*calendarios), comp);
        res = calendarios[numCalendarios - 1] - calendarios[0] - (numCalendarios - 1);
        printf("%d\n", res);
    }
    return 0;
}