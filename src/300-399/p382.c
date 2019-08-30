/* Internet en el metro */
#include <stdio.h>

int main() {
    int n, d, a;
    int i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &d, &a);
        int antenas[a], distancias[a];
        for(j = 0; j < a; j++) {
            scanf("%d %d", &antenas[j], &distancias[j]);
        }
        int aux = 0;
        for(j = 0; j < a; j++) {
            if(aux > antenas[j]-distancias[j]-1) {
                if(aux < antenas[j]+distancias[j]) {
                    aux = antenas[j]+distancias[j];
                }
            }
        }
        if(aux > d-1) {
            printf("SI\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}