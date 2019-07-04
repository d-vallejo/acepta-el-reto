/* Me duermo en los juegos */
#include <stdio.h>

int main() {
    int numCasos, numPuntos, numMinutos, numSesiones, acumulado;
    int i, j;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d", &numPuntos, &numMinutos);
        int puntos[numPuntos];
        for(i = 0; i < numPuntos; i++) {
            scanf("%d", &puntos[i]);
        }
        numSesiones = 1;
        acumulado = 0;
        for(i = 0; i < numPuntos; i++) {
            for(j = i; j < numPuntos; j++) {
                if(puntos[i]-acumulado > numMinutos) {
                    numSesiones++;
                    j--;
                    acumulado = puntos[j];
                    i = j;
                    break;
                }
            }
        }
        printf("%d\n", numSesiones);
    }
    return 0;
}