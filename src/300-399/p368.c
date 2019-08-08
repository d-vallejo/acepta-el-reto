/* Cociendo huevos */
#include <stdio.h>

int main() {

    int numHuevos, numOlla, numMinutos;

    while(1) {
        scanf("%d", &numHuevos);
        scanf("%d", &numOlla);
        if(!numHuevos && !numOlla)
            break;
        numMinutos = numHuevos / numOlla;
        if(numHuevos % numOlla) {
            numMinutos++;
        }
        printf("%d\n", 10 * numMinutos);
    }
    return 0;
}