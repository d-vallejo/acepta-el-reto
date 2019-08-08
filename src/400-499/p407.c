/* Rebotando en el parchís */
#include <stdio.h>

void main() {

    int numCasillas, numActual, numDado;

    while(1) {
        scanf("%d %d %d", &numCasillas, &numActual, &numDado);
        if(!numCasillas && !numActual && !numDado) {
            break;
        }
        if(numActual + numDado > numCasillas) {
            printf("%d\n", numCasillas - (numActual + numDado - numCasillas));
        } else {
            printf("%d\n", numActual + numDado);
        }
    }

}