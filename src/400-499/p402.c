/* Las dimensiones del puzzle */
#include <stdio.h>
#include <math.h>

int main() {
    int piezas, x;
    while(1) {
        scanf("%d", &piezas);
        if(piezas == 0)
            return 0;
        x = sqrt(piezas);
        while(piezas % x)
            x--;
        printf("%d\n", piezas/x);
    }
}