/* Fin de mes */
#include <stdio.h>

int main() {

    int numCasos, saldoActual, saldo;

    scanf("%d", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%d", &saldoActual);
        scanf("%d", &saldo);
        if((saldoActual + saldo) < 0) {
            printf("NO\n");
        } else {
            printf("SI\n");
        }
    }
    return 0;
}