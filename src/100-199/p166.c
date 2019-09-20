/* Zapping */
#include <stdio.h>

int main() {
    int a, b, c, d;
    while(1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
            return 0;
        if(a > b) {
            c = a - b;
            d = 99 - a + b;
        } else {
            c = b - a;
            d = 99 - b + a;
        }
        if(c < d)
            printf("%d\n", c);
        else 
            printf("%d\n", d);
    }
}