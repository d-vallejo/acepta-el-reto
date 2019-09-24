/* Números polidivisibles */
#include <stdio.h>
#include <math.h>

int divisible(long long numero, int len) {
    if(len == 1)
        return 1;
    if(numero % len)
        return 0;
    else
        return divisible(numero/10, len-1);
}

int main() {
    long long numero;
    int len, res;
    while(1) {
        if(scanf("%lld", &numero) == EOF)
            return 0;
        len = floor(log10(numero)) + 1;
        res = divisible(numero, len);
        if(res)
            printf("POLIDIVISIBLE\n");
        else
            printf("NO POLIDIVISIBLE\n");
    }
}