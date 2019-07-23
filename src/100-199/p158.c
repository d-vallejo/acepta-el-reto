/* Los saltos de Mario */
#include <stdio.h>

int main () {
    long numCasos, numMuros, anterior, actual, arriba, abajo;
    scanf("%ld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        arriba = 0;
        abajo = 0;
        scanf("%ld", &numMuros);
        if(numMuros > 0) {
            scanf("%ld", &anterior);
        }
        numMuros--;
        for( ; numMuros > 0; numMuros--) {
            scanf("%ld", &actual);
            if(actual > anterior) {
                arriba++;
            } else if(actual < anterior) {
                abajo++;
            }
            anterior = actual;
        }
        printf("%ld %ld\n", arriba, abajo);
    }
    return 0;
}