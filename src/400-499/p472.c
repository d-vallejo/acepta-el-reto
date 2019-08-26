/* Caminando voy */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int d, n;
    int i;
    int anterior, siguiente, inicio;
    while(1) {
        if(scanf("%d %d", &d, &n) == EOF)
            return 0;
        scanf("%d", &anterior);
        inicio = anterior;
        int apta = 1;
        for(i = 1; i < n; i++) {
            scanf("%d", &siguiente);
            if(siguiente > anterior) {
                if(abs(siguiente-inicio) > d) {
                    apta = 0;
                }
            } else {
                inicio = siguiente;
            }
            anterior = siguiente;
        }
        if(apta) {
            printf("APTA\n");
        } else {
            printf("NO APTA\n");
        }
    }
}