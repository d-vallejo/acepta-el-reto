/* Y el ganador es... */
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    int equipos, globos, equipo, i, ganador, empate, aux;
    char color[21];
    while(1) {
        scanf("%d %d", &equipos, &globos);
        if(equipos == 0 && globos == 0)
            break;
        int res[equipos];
        memset(res, 0, sizeof(res));
        for(i = 0; i < globos; i++) {
            scanf("%d %s", &equipo, color);
            res[equipo - 1]++;
        }
        aux = INT_MIN;
        for(i = 0; i < equipos; i++) {
            if(res[i] > aux) {
                ganador = i + 1;
                aux = res[i];
                empate = 0;
            } else if(aux == res[i]) {
                empate = 1;
            }
        }
        (empate) ? printf("EMPATE\n") : printf("%d\n", ganador);
    }
    return 0;
}