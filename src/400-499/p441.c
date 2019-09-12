/* Contar hasta el final */
#include <stdio.h>
#include <string.h>

int main() {
    char numero[1001] = "";
    int i;
    while(1) {
        if(scanf("%s", numero) == EOF)
            return 0;
        for(i = strlen(numero)-1; i > -1; i--) {
            if(numero[i] != '.') {
                if(numero[i] == '9') {
                    numero[i] = '0';
                    if(i == 0)
                        if(strlen(numero) == 3)
                            printf("1.");
                        else if (numero[i+3] == '.')
                            printf("1.");
                        else
                            printf("1");
                } else {
                    numero[i]++;
                    break;
                }
            }
        }
        for(i = 0; i < strlen(numero); i++) {
            printf("%c", numero[i]);
        }
        printf("\n");
    }
}