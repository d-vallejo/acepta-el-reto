/* La digestión de las serpientes */
#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    int i, j;
    while(1) {
        scanf("%d %d", &n ,&k);
        if(n == 0 && k == 0)
            return 0;
        int max = 0, aux = 0, sum = 0, a[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; i++) {
            if(a[i] == 1) {
                for(j = i; j < n; j++, i++) {
                    sum++;
                    if(a[j] == 1) {
                        aux = 0;
                        if(max < sum) {
                            max = sum;
                        }
                    } else {
                        aux++;
                    }
                    if(aux > k) {
                        break;
                    }
                }
                sum = 0;
                aux = 0;
            }
        }
        printf("%d\n", max);
    }
}