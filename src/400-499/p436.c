/* ¡Reto superado! */
#include <stdio.h>

int main() {
    double a, b;
    int c;
    while(scanf("%lf %lf", &a, &b) != EOF) {
        c = 0;
        a = a / 1000000;
        while(a < b) {
            c++;
            a = a * 2;
        }
        printf("%d\n", c);
    }
    return 0;
}