/* Palabras pentavocálicas */
#include <stdio.h>
#include <string.h>

int main() {

    int numCasos, vocales[5], i;
    char palabra[31];

    scanf("%d", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%s", palabra);
        memset(vocales, 0, sizeof(vocales));
        for(i = 0; i < strlen(palabra); i++) {
            if(palabra[i] == 'a') {
                vocales[0] = 1;
            } else if(palabra[i] == 'e') {
                vocales[1] = 1;
            } else if(palabra[i] == 'i') {
                vocales[2] = 1;
            } else if(palabra[i] == 'o') {
                vocales[3] = 1;
            } else if(palabra[i] == 'u') {
                vocales[4] = 1;
            }
        }
        for(i = 0; i < 5; i++) {
            if(vocales[i] == 0) {
                break;
            }
        }
        if(i == 5) {
            printf("SI\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}