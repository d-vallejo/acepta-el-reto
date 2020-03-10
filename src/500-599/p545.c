/* Ahorrando fuerzas */
#include <stdio.h>
#include <limits.h>

int main() {
    int longitud, b, posicion, velocidad;
    int i;
    while(1) {
        if(scanf("%d %d", &longitud, &b) == EOF)
            return 0;
        int min = INT_MAX, res;
        for(i = 0; i < b; i++) {
            scanf("%d %d", &posicion, &velocidad);
            if(posicion > -1) {
                res = longitud / velocidad + posicion;
                if(res < min)
                    min = res;
            }
        }
        printf("%d\n", min);
    }
}