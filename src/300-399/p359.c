/* Timo en el cocedero de mariscos */
#include <stdio.h>

int main() {
    int numCasos, n, sum, conchas;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        sum = 0;
        conchas = 0;
        while(1) {
            scanf("%d", &n);
            if(n == -1)
                break;
            sum = sum + n;
            conchas++;
        }
        if(sum > conchas)
            printf("Suerte\n");
        else if(sum == conchas)
            printf("Justo\n");
        else
            printf("Timo\n");
    }
    return 0;
}