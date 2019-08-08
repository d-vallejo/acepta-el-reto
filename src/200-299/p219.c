/* La lotería de la peña Atlética */
#include <stdio.h>

int main() {

        long numCasos, numDecimo, numDecimos, numCompras;

        scanf("%ld", &numCasos);
        for( ; numCasos > 0; numCasos--) {
                numCompras = 0;
                scanf("%ld", &numDecimos);
                for( ; numDecimos > 0; numDecimos--) {
                        scanf("%ld", &numDecimo);
                        if(numDecimo % 2) {

                        } else {
                                numCompras++;
                        }
                }
                printf("%ld\n", numCompras);
        }
        return 0;
}