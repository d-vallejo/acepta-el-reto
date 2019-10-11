/* Escudos del ejército romano */
#include <stdio.h>
#include <math.h>

int main() {
    int n, res, aux;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            return 0;
        res = 0;
        while(n > 0) {
            aux = sqrt(n);
            res = res + aux*aux + 4*aux;
            n = n - aux*aux;
        }
        printf("%d\n", res);
    }
}