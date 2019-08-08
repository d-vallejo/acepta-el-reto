/* Velocidad = desplazamiento/tiempo */
#include <stdio.h>

int main() {

    long numCasos, valor1, valor2;
    char medida1, medida2;

    scanf("%ld\n", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%c=%ld %c=%ld\n", &medida1, &valor1, &medida2, &valor2);
        if(medida1 == 'D' && medida2 == 'T') {
            printf("V=%ld\n", valor1 / valor2);
        } else if(medida1 == 'T' && medida2 == 'D') {
            printf("V=%ld\n", valor2 / valor1);
        } else if(medida1 == 'T' && medida2 == 'V') {
            printf("D=%ld\n", valor1 * valor2);
        } else if(medida1 == 'V' && medida2 == 'T') {
            printf("D=%ld\n", valor1 * valor2);
        } else if(medida1 == 'V' && medida2 == 'D') {
            printf("T=%ld\n", valor2 / valor1);
        } else if(medida1 == 'D' && medida2 == 'V') {
            printf("T=%ld\n", valor1 / valor2);
        }
    }
    return 0;
}