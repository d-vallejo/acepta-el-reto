/* ¿Qué lado de la calle? */
#include <stdio.h>

int main() {

        long numVivienda;

        while(1) {
                scanf("%ld", &numVivienda);
                if(numVivienda == 0) {
                        break;
                }
                if(numVivienda % 2) {
                        printf("IZQUIERDA\n");
                } else {
                        printf("DERECHA\n");
                }
        }
        return 0;
}