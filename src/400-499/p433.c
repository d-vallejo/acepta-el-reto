/* Racimos de uvas */
#include <stdio.h>

int main () {

    long numUvas, numPrueba, suma;

    while(1) {
        scanf("%ld", &numUvas);
        if(!numUvas) {
            break;
        }
        suma = 0;
        for(numPrueba = 1; suma < numUvas; numPrueba++) {
            suma = numPrueba * (numPrueba + 1) / 2;
        }
        printf("%ld\n", --numPrueba);
    }
    return 0;
}