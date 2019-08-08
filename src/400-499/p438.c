/* Esgritura */
#include <stdio.h>

int main() {

    char caracter;
    long numLetras, numExclamaciones;

    while(scanf("%c", &caracter) > 0) {
        numLetras = 0;
        numExclamaciones = 0;
        if((caracter > 64 && caracter < 91) || (caracter > 96 && caracter < 123)) {
            numLetras++;
        } else if(caracter == '!') {
            numExclamaciones++;
        }
        while(caracter != 10) {
            scanf("%c", &caracter);
            if((caracter > 64 && caracter < 91) || (caracter > 96 && caracter < 123)) {
                numLetras++;
            } else if(caracter == '!') {
                numExclamaciones++;
            }
        }
        if(numExclamaciones > numLetras) {
            printf("ESGRITO\n");
        } else {
            printf("escrito\n");
        }
    }
    return 0;
}