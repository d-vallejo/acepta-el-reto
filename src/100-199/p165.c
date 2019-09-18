/* Número hyperpar */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char numero[101];
    int res;
    int i;
    while(1) {
        scanf("%s", numero);
        if(atoi(numero) < 0)
            return 0;
        res = 1;
        for(i = 0; i < strlen(numero); i++) {
            if((numero[i]-'0') % 2)
                res = 0;
        }
        if(res)
            printf("SI\n");
        else
            printf("NO\n");
    }
}