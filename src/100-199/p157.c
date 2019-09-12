/* ¿Cuantos días faltan? */
#include <stdio.h>

int main() {
    int n, d, m, meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, res;
    int i;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &d, &m);
        res = meses[m-1] - d;
        for(i = m; i < 12; i++) {
            res = res + meses[i];
        }
        printf("%d\n", res);
    }
    return 0;
}