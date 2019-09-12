/* Aprobar química */
#include <stdio.h>
#include <string.h>

int main() {
    char elemento[51], *s[19] = {"1s", "2s", "2p", "3s", "3p", "4s", "3d", "4p", "5s", "4d", "5p", "6s", "4f", "5d", "6p", "7s", "5f", "6d", "7p"};
    int e[19] = {2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6}, z;
    int i;
    while(1) {
        scanf("%s", elemento);
        if(strcmp(elemento, "Exit") == 0)
            return 0;
        i = 0;
        scanf("%d", &z);
        if(z == 0) {
            printf("1s0\n");
        } else {
            while(z > 0) {
                if(z > e[i]) {
                    if(i > 0)
                        printf(" ");
                    printf("%s%d", s[i], e[i]);
                    z = z - e[i];
                } else {
                    if(i > 0)
                        printf(" ");
                    printf("%s%d", s[i], z);
                    z = z - z;
                }
                i++;
            }
            printf("\n");
        }
    }
}