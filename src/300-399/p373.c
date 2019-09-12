/* Cubos visibles */
#include <stdio.h>

int main() {
    int numCasos;
    long long n;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%lld", &n);
        printf("%lld\n", 6*(n-1)*(n-1)+2);
    }
    return 0;
}