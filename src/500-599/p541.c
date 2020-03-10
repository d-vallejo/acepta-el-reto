/* IIII */
#include <stdio.h>

int mcd(int a, int b) {
    int aux;
    while(b > 0) {
        aux = b;
        b = a % b;
        a = aux;
    }
    return a;
}

int mcm(int a, int b) {
    return a * (b / mcd(a, b));
}

int main() {
    int a, b, c, res;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0)
            return 0;
        res = mcd(a, b);
        res = mcd(c, res);
        printf("%d\n", a / res + b / res + c /res);
    }
}