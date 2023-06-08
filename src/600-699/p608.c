#include <stdio.h>

int main() {
    int n, a, b, c;
    while(1) {
        scanf("%d", &n);
        if(n == 0) 
            break;
        c = 0;
        b = 1;
        while(n--) {
            scanf("%d", &a);
            if(a > 6)
                b = 1;
            else if(a < 5) {
                if(b == 1) {
                    c = c + 1;
                    b = 0;
                }
            }
        }
        printf("%d\n", c);         
    }
    return 0;
}