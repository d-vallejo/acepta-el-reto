/* Polisílaba es polisílaba */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int numCasos;
    char palabra1[21], es[3], palabra2[21];
    int i;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%s %s %s", palabra1, es, palabra2);
        for(i = 0; i < strlen(palabra1); i++) {
            palabra1[i] = tolower(palabra1[i]);
        }
        for(i = 0; i < strlen(palabra2); i++) {
            palabra2[i] = tolower(palabra2[i]);
        }
        if(strcmp(palabra1, palabra2) == 0)
            printf("TAUTOLOGIA\n");
        else
            printf("NO TAUTOLOGIA\n");
    }
    return 0;
}