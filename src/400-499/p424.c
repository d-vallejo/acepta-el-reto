/* Ahorro infantil */
#include <stdio.h>

int main() {
    int n;
    long long num, max, res;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            return 0;
        max = res = 0;
        for(; n > 0; n--) {
            scanf("%lld", &num);
            res = res + num;
            if(res > max)
                max = res;
        }
        printf("%lld %lld\n", res, max);
    }
}