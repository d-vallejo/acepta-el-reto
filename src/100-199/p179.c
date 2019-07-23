/* Molinos de viento */
#include <stdio.h>

int main() {
    int numMolinos, numCasos, inicio, fin, molino;
    int acumulado[1000000];
    int i;
    acumulado[0] = 0;
    while(1) {
        scanf("%d", &numMolinos);
        if(numMolinos == 0)
            break;
        for(i = 0; i < numMolinos; i++) {
            scanf("%d", &molino);
            acumulado[i+1] = molino + acumulado[i];
        }
        scanf("%d", &numCasos);
        for(i = 0; i < numCasos; i++) {
            scanf("%d %d", &inicio, &fin);
            printf("%d\n", acumulado[fin] - acumulado[inicio-1]);
        }
    }
    return 0;
}