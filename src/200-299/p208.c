/* Tirando bolos */
#include <stdio.h>

int main() {
    long long n, m, o, p;
    while(1) {
        scanf("%lld %lld", &n, &m);
        if(n == 0 && m == 0)
            return 0;
        if(m == 1)
            printf("0\n");
        else {
            o = n * (n+1) / 2;
            p = n - m + 1;
            p = p * (p+1) / 2;
            printf("%lld\n", o-p);
        }
    }
}