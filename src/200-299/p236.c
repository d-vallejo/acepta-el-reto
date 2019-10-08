/* Los orígenes del ajedrez */
#include <stdio.h>

int main() {
    long long p, x, n, res;
    int i;
    while(1) {
        scanf("%lld %lld %lld", &p, &x, &n);
        if(p == 0 && x == 0 & n == 0)
            return 0;
        res = 0;
        for(i = 0; i < n; i++) {
            res = res + p;
            p = p * x;
        }
        printf("%lld\n", res);
    }
}