/* Abono de temporada */
#include <stdio.h>

int main() {
    int t, p, d, res;
    while(1) {
        scanf("%d %d %d", &t, &p, &d);
        if(t == 0 && p == 0 && d == 0)
            return 0;
        res = t/p * d;
        if(t % p > d)
            res = res + d;
        else
            res = res + (t%p);
        printf("%d\n", res);
    }
}