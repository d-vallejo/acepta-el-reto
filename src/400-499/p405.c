/* Imprimiendo páginas sueltas */
#include <stdio.h>

int main() {
    int a, b, rango, inicio;
    while(1) {
        scanf("%d", &a);
        if(a == 0)
            break;
        inicio = a;
        rango = 0;
        while(1) {
            scanf("%d", &b);
            if(b == 0) {
                break;
            }
            if(b == a+1) {
                rango = 1;
            } else {
                if(rango)
                    printf("%d-%d,", inicio, a);
                else
                    printf("%d,", a);
                inicio = b;
                rango = 0;
            }
            a = b;
        }
        if(rango)
            printf("%d-%d", inicio, a);
        else
            printf("%d", a);
        printf("\n");
    }
    return 0;
}