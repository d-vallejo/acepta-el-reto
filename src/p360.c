/* Rellenando el agua de la fuente */
#include <stdio.h>

int main() {
    int numCasos, i, m, p, sum, numVeces;
    scanf("%d", &numCasos);
    while(numCasos--) {
        sum = 0;
        numVeces = 0;
        scanf("%d %d", &i, &m);
        while(1) {
            scanf("%d", &p);
            if(p == -1) break;
            sum = sum + p;
            if((i-sum) < m) {
                sum = 0;
                numVeces++;
            }
        }
        printf("%d\n", numVeces);
    }
    return 0;
}