/* Los bocadillos de la hormiga reina */
#include <stdio.h>

int main() {
    int n, aux, sum, res;
    int i, j;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            return 0;
        int trozos[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &trozos[i]);
        }
        res = 0;
        for(i = 0; i < n; i++) {
            aux = trozos[i];
            sum = 0;
            for(j = i+1; j < n; j++) {
                sum = sum + trozos[j];
                if(sum > aux)
                    break;
            }
            if(sum == aux) {
                res = 1;
                break;
            }
        }
        if(res)
            printf("SI %d\n", i+1);
        else
            printf("NO\n");
    }
}