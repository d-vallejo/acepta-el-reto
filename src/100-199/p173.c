/* Partido de squash */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char puntos[1000001];
    int i;
    while(1) {
        scanf("%s", puntos);
        if(strcmp(puntos, "F") == 0)
            return 0;
        char l = puntos[0];
        int a = 0, b = 0, c = 0, p = 0;
        if(l == 'A') {
            a++;
        }
        for(i = 1; i < strlen(puntos)-1; i++) {
            if(l == puntos[i]) {
                if(l == 'A') {
                    a++;
                } else {
                    b++;
                }
            } else {
                l = puntos [i];
            }
            c = 1;
            if((a > 8 || b > 8) & abs(a-b) > 1) {
                if(p) {
                    printf(" %d-%d", a, b);
                    a = b = c = 0;
                } else {
                    printf("%d-%d", a, b);
                    a = b = c = 0;
                    p = 1;
                }
            }
        }
        if(p) {
            if(c) {
                printf(" %d-%d", a, b);
            }
        } else {
            printf("%d-%d", a, b);
        }
        printf("\n");
    }
}