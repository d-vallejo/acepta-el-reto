/* Claras y oscuras */
#include <stdio.h>

int main() {

    int numCasos, filas, columnas, huecos;

    scanf("%d", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%d %d", &filas, &columnas);
        huecos = filas * columnas;
        if(huecos % 2) {
            printf("%d %d\n", huecos / 2 + 1, huecos / 2);
        } else {
            printf("%d %d\n", huecos / 2, huecos / 2);
        }
    }
    return 0;
}