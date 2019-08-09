/* Creciente por los pelos */
#include <stdio.h>

int main() {
    int n;
    int i, j;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;
        int numeros[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &numeros[i]);
        }
        j = 0;
        for(i = n-1; i > 0; i--) {
            if(numeros[i] == numeros[i-1]) {
                j = i;
                break;
            }
        }
        numeros[j]++;
        for(i = j+1; i < n; i++) {
            numeros[i] = numeros[j];
        }
        for(i = 0; i < n; i++)
            if(i == 0)
                printf("%d", numeros[i]);
            else
                printf(" %d", numeros[i]);
        printf("\n");
    }
    return 0;
}