/* Escalando el Everest */
#include <stdio.h>

int main() {

    long numEscaladores, velocidadLider, velocidad, maximo, minimo, numActual, numTotal;

    while(1) {
        scanf("%ld", &numEscaladores);
        if(numEscaladores == 0) {
                break;
        }
        numTotal = 0;
        numActual = 0;
        velocidadLider = 1000000001;
        maximo = 0;
        minimo = 10000;
        for( ; numEscaladores > 0; numEscaladores--) {
            scanf("%ld", &velocidad);
            if(velocidad < velocidadLider) {
                numTotal++;
                if(numActual < minimo && numActual > 0) {
                    minimo = numActual;
                }
                if(numActual > maximo && numActual > 0) {
                    maximo = numActual;
                }
                numActual = 0;
                numActual++;
                velocidadLider = velocidad;
            } else {
                numActual++;
            }
        }
        if(numActual < minimo) {
            minimo = numActual;
        }
        if(numActual > maximo) {
            maximo = numActual;
        }
        printf("%ld %ld %ld\n", numTotal, minimo, maximo);
    }
    return 0;
}