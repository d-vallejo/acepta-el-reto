/* Matrices triangulares */
#include <stdio.h>

int main() {
    int n, solucionUp, solucionDown, num;
    int i, j;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;
        solucionUp = 1;
        solucionDown = 1;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                scanf("%d", &num);
                if(j > i) {
                    if(num != 0) {
                        solucionUp = 0;
                    }
                } else if(j < i) {
                    if(num != 0) {
                        solucionDown = 0;
                    }
                }
            }
        }
        if(solucionUp || solucionDown)
            printf("SI\n");
        else
            printf("NO\n");
    }
    return 0;
}