#include <stdio.h>

int main() {
    int A, a, b, c, d, e, M = 24, N = 5;
    while(1) {
        scanf("%d", &A);
        if(A == 0)
            break;
        a = A % 19;
        b = A % 4;
        c = A % 7;
        d = (19*a + M) % 30;
        e = (2*b + 4*c + 6*d + N) % 7;
        if(d+e < 10) {
            printf("%d de marzo\n", (d + e + 22));
        } else {
            if((d + e - 9) == 26) {
                printf("19 de abril\n");
            } else if((d + e - 9) == 25 && d == 28){
                printf("18 de abril\n");
            } else {
                printf("%d de abril\n", (d + e - 9));
            }
        }
    }
    return 0;
}