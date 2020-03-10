/* ¡Feliz década nueva? */
#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    char c[6];
    while(1) {
        if(scanf("%d %d", &a, &b) == EOF)
            return 0;
        sprintf(c, "%d", a);
        int lenC = strlen(c);
        if((b - (c[lenC-1] - '0') + 1) % 10)
            printf("TOCA ESPERAR\n");
        else
            printf("FELIZ DECADA NUEVA\n");
    }
}