/* Toesto era campo */
#include <stdio.h>

int main() {
    int a, b;
    while(1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) {
            return 0;
        }
        if(a < b) {
            printf("SENIL\n");
        } else {
            printf("CUERDO\n");
        }
    }
}