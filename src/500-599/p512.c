/* Döner sospechoso */
#include <stdio.h>

int main() {
    int numCasos, peso1, peso2;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d", &peso1, &peso2);
        printf("%d\n", (int)(peso1 * 100.0 / (peso1+peso2)));
    }
    return 0;
}