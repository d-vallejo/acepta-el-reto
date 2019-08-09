/* Abadías pirenáicas */
#include <stdio.h>
#include <limits.h>

int main() {
    int n, max, sol;
    int i;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;
        int numeros[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &numeros[i]);
        }
        max = INT_MIN;
        sol = 0;
        for(i = n-1; i > -1; i--) {
            if(numeros[i] > max) {
                max = numeros[i];
                sol++;
            }
        }
        printf("%d\n", sol);
    }
    return 0;
}