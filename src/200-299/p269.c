/* Entrenando para la vuelta ciclista */
#include <stdio.h>

int main() {
    int numCasos, n, m, res;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        res = m = 0;
        while(1) {
            scanf("%d", &n);
            if(n == 0)
                break;
            m = m + n*2;
            res = res + m;
        }
        printf("%d\n", res);
    }
    return 0;
}