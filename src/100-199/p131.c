/* Llenando piscinas */
#include <stdio.h>
#include <limits.h>

int llenado(int p, int b, int v) {
    int num, aux, sol = 0;
    if(v > b-1 && p > b)
        return INT_MAX;
    else if(b > p-1)
        return 1;
    while(p > 0) {
        num = p / b;
        sol = sol + num;
        aux = p - (num*b) + num*v;
        if(aux < 1)
            return sol;
        if(aux < b+1) {
            sol++;
            return sol;
        }
        p = aux;
    }
}

int main() {
    int p1, b1, v1, s1, p2, b2, v2, s2;
    while(1) {
        scanf("%d %d %d %d %d %d", &p1, &b1, &v1, &p2, &b2, &v2);
        if(p1 == 0 || p2 == 0)
            return 0;
        s1 = llenado(p1, b1, v1);
        s2 = llenado(p2, b2, v2);
        if(s1 < s2)
            printf("YO %d\n", s1);
        else if(s1 > s2)
            printf("VECINO %d\n", s2);
        else
            if(s1 == INT_MAX)
                printf("EMPATE 0\n");
            else
                printf("EMPATE %d\n", s1);
    }
}