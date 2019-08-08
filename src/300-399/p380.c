/* ¡Me caso! */
#include <stdio.h>

int main() {

    long numCasos, total, gasto;

    while(1) {
        scanf("%ld", &numCasos);
        if(numCasos == 0) {
            break;
        }
        total = 0;
        for( ; numCasos > 0; numCasos--) {
            scanf("%ld", &gasto);
            total += gasto;
        }
        printf("%ld\n", total);
    }
    return 0;
}