/* La 13-14 */
#include <stdio.h>

int main() {

    long numCasos, numero1, numero2;

    scanf("%ld\n", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%ld-%ld", &numero1, &numero2);
        if(numero1 + 1 == numero2 || numero1 - 1 == numero2) {
            if(numero1 < numero2) {
                if(numero1 % 2) {
                    printf("NO\n");
                } else {
                    printf("SI\n");
                }
            } else if(numero1 > numero2) {
                if(numero2 % 2) {
                    printf("NO\n");
                } else {
                    printf("SI\n");
                }
            } else {
                printf("NO\n");
            }
        } else {
            printf("NO\n");
        }
    }
    return 0;
}