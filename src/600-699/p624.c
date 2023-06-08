#include <stdio.h>

int main() {
    int n, a, b[1000], c, d;
    while(1) {
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        memset(b, 0, sizeof(b));
        c = 0;
        d = 0;
        while(n--) {
            scanf("%d", &a);
            if(b[a-1] == 0) {
                b[a-1] = 1;
                c++;
            } else {
                b[a-1] = 0;
                c--;
            }
            if(c > d) {
                d = c;
            }
        }
        printf("%d\n", d);
    }
    return 0;
}