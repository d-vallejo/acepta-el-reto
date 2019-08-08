/* El burro y las alforjas */
#include <stdio.h>
#include <string.h>

int main() {
    long numCasos, numBurros, numBien, numSacos, peso, pesos[19999];
    int correcto;

    scanf("%ld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        numBien = 0;
        correcto = 1;
        memset(pesos, 0, sizeof(pesos));
        scanf("%ld %ld", &numBurros, &numSacos);
        for( ; numSacos > 0; numSacos--) {
            scanf("%ld", &peso);
            if(pesos[peso-1] == 1 && correcto) {
                pesos[peso-1] = 0;
                numBien++;
            } else {
                pesos[peso-1] = 1;
            }
            if(numBien == numBurros) {
                correcto = 0;
            }
        }
        printf("%ld\n", numBien);
    }
    return 0;
}