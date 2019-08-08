/* San Fermines */
#include <stdio.h>

int main() {
    long long numCasos, velocidad, max;
    while(scanf("%lld", &numCasos) != EOF) {
        max = 0;
        while(numCasos--) {
            scanf("%lld", &velocidad);
            if(velocidad > max)
                max = velocidad;
        }
        printf("%lld\n", max);
    }
    return 0;
}