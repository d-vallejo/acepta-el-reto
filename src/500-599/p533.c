/* La botella ganadora */
#include <stdio.h>

int main() {
    int numCasos, a, res;
    double b, c;
    int i;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d", &a);
        c = 0;
        res = 0;
        for(i = 0; ; i++) {
            scanf("%lf", &b);
            if(b == 0)
                break;
            c = c + b * 0.125;
            if(c >= a && res == 0) {
                res = i + 1;
            }
        }
        if(res == 0)
            printf("SIGAMOS RECICLANDO\n");
        else
            printf("%d\n", res);
    }
    return 0;
}