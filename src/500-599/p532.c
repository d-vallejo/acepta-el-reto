/* Reduciendo envases */
#include <stdio.h>

int main() {
    int numCasos, a, b;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", b-a);
    }
    return 0;
}