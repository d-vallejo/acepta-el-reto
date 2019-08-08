/* Abuelas falsas */
#include <stdio.h>
#include <string.h>

int main() {

    long numCasos, numNombres, i;
    char nombreNieto[11], nombre[11];
    int correcto, encontrado;

    scanf("%ld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        correcto = 0;
        encontrado = 0;
        scanf("%s", nombreNieto);
        scanf("%ld", &numNombres);
        for(i = numNombres ; i > 0; i--) {
            scanf("%s", nombre);
            if(i == 1 && !encontrado && numNombres > 1) {
                if(!strcmp(nombreNieto, nombre)) {
                    correcto = 1;
                } else {
                    correcto = 0;
                }
            } else {
                if(!strcmp(nombreNieto, nombre)) {
                    encontrado = 1;
                }
            }
        }
        if(correcto) {
            printf("VERDADERA\n");
        } else {
            printf("FALSA\n");
        }
    }
    return 0;
}