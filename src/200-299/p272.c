/* Tres dedos en cada mano */
#include <stdio.h>

void convierte(int);

int main() {

    int numCasos, numero;

    scanf("%d", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%d", &numero);
        if(numero == 0) {
            printf("0\n");
        } else {
            convierte(numero);
            printf("\n");
        }
    }
}

void convierte(int numero) {

    int aux;

    if(numero == 0) {
        return;
    }
    aux = numero % 6;
    numero = numero / 6;
    convierte(numero);
    printf("%d", aux);
}