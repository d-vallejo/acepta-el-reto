/* Entrando al cine */
#include <stdio.h>

int main() {
    int numCasos, n, num, res, sol;
    int i;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        res = 0;
        sol = 1;
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            scanf("%d", &num);
            if(num % 2)
                res++;
            else
                if(res > 0)
                    sol = 0;
        }
        if(sol)
            printf("SI %d\n", n-res);
        else
            printf("NO\n");
    }
}