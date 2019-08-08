/* ¿Es múltiplo de 3? */
#include <stdio.h>

int main() {

    long long numCasos, numero, suma;

    scanf("%lld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        suma = 0;
        scanf("%lld", &numero);
        suma = numero * (numero + 1) / 2;
        suma = suma % 3;
        if(suma) {
            printf("NO\n");
        } else {
            printf("SI\n");
        }
    }
    return 0;
}