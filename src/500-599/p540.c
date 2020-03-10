/* Por el hueco de la escalera */
#include <stdio.h>

int main() {
    int numCasos, a, b, c, d;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d %d\n", b*c+d, (b*c+d)+(a*b));
    }
    return 0;
}