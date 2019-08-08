/* Contando en la arena */
#include <stdio.h>

int main() {

    long numero;

    while(1) {
        scanf("%ld\n", &numero);
        if(numero == 0) {
            break;
        }
        for( ; numero > 0; numero--) {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}