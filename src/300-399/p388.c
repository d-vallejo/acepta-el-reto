/* Colocando barcos */
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, aux;
    int i, j;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            return 0;
        int barcos[n][2];
        int max = 0;
        for(i = 0; i < n; i++) {
            scanf("%d %d", &barcos[i][0], &barcos[i][1]);
        }
        for(i = 0; i < n; i++) {
            for(j = i+1; j < n; j++) {
                aux = abs(barcos[i][0] - barcos[j][0]) + abs(barcos[i][1] - barcos[j][1]);
                if(aux > max)
                    max = aux;
            }
        }
        printf("%d\n", max);
    }
}