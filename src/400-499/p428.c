/* Tendencia al lado oscuro */
#include <stdio.h>

int main() {
    int numCasos, n, res;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        scanf("%d", &n);
        res = 0;
        while(n / 5) {
            if(n % 5 == 4)
                res++;
            n = n / 5;
        }
        if(n == 4)
            res++;
        if(res < 2)
            printf("NO\n");
        else
            printf("SI\n");
    }
    return 0;
}