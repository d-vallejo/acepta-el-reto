/* Goteras */
#include <stdio.h>

int main() {
    int numCasos, n;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d", &n);
        printf("%02d:", n/3600);
        n = n % 3600;
        printf("%02d:", n/60);
        n = n % 60;
        printf("%02d\n", n);
    }
    return 0;
}