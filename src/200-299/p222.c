/* Serie de potencias */
#include <stdio.h>

int main() {
    int x, n, a, res;
    int i;
    while(1) {
        if(scanf("%d %d", &x, &n) == EOF)
            return 0;
        a = res = 1;
        for(i = 0; i < n; i++) {
            a = (a*x) % 1000007;
            res = (res+a) % 1000007;
        }
        printf("%d\n", res);
    }
}