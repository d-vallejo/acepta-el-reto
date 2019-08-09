/* Los Dalton */
#include <stdio.h>

int main() {
    int n, orden, solucion;
    long long a, b;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;
        solucion = 1;
        scanf("%lld", &a);
        scanf("%lld", &b);
        if(a < b)
            orden = 1;
        else if(a > b)
            orden = 0;
        else
            solucion = 0;
        a = b;
        n--;
        n--;
        while(n--) {            
            scanf("%lld", &b);
            if(solucion) {
                if(orden) {
                    if(a >= b) {
                        solucion = 0;
                    }
                } else {
                    if(a <= b) {
                        solucion = 0;
                    }
                }
            a = b;
            }
        }
        if(solucion)
            printf("DALTON\n");
        else
            printf("DESCONOCIDOS\n");
    }
    return 0;
}