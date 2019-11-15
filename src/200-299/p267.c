/* Postes para un cercado */
#include <stdio.h>

int main() {
    long long a, b, max;
    while(1) {
        scanf("%lld %lld %lld", &a, &b, &max);
        if(a == 0 && b == 0 && max == 0)
            return 0;
        int res = 4;
        if(a > max) {
            res = res + (2 * (a / max));
            if(a % max == 0)
                res = res - 2;
        }
        if(b > max) {
            res = res + (2 * (b / max));
            if(b % max == 0)
                res = res - 2;
        }
        printf("%d\n", res);
    }
}