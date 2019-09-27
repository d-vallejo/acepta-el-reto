/* Dividir factoriales */
#include <stdio.h>

int main() {
    int num, den;
    long long res;
    while(1) {
        scanf("%d %d", &num, &den);
        if(num < den)
            return 0;
        res = 1;
        for(; num > den; num--) {
            res = res * num;
        }
        printf("%lld\n", res);
    }
}