/* ¿Dónde está la bolita? */
#include <stdio.h>

int main() {
    int n, i, a, b;
    while(1) {
        scanf("%d %d", &n, &i);
        if(n == 0 && i == 0)
            return 0;
        while(1) {
            scanf("%d %d", &a, &b);
            if(a == 0 && b == 0)
                break;
            if(a == i)
                i = b;
            else if(b == i)
                i = a;
        }
        printf("%d\n", i);
    }
}