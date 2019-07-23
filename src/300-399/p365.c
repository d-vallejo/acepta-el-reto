/* En la cola de Papá Noel */
#include <stdio.h>

int main() {
    int numCasos, n, a, regalos[100], min, i, j;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d", &n);
        scanf("%d", &a);
        min = 0;
        for(i = 0; i < n; i++) {
            scanf("%d", &regalos[i]);
            if(i == a-1) {
                min = min + regalos[i]*2;
                for(j = 0; j < i; j++) {
                    if(regalos[j] > regalos[i]) min = min + regalos[i]*2;
                    else min = min + regalos[j]*2;
                }
            } else if(i > a-1) {
                if(regalos[i] < regalos[a-1]) min = min + regalos[i]*2;
                else min = min + (regalos[a-1]-1)*2;
            }
        }
        printf("%d\n", min);
    }
}