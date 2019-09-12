/* Suma descendente */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[11];
    int suma;
    int i, j;
    while(1) {
        scanf("%s", n);
        if(strcmp(n, "0") == 0)
            return 0;
        suma = atoi(n);
        for(i = 1; i < strlen(n); i++) {
            char s[11] = "";
            for(j = i; j < strlen(n); j++) {
                s[j-i] = n[j];
            }
            suma = suma + atoi(s);
        }
        printf("%d\n", suma);
    }
}