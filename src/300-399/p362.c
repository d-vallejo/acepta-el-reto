/* El día de Navidad */
#include <stdio.h>

int main() {

    long numCasos, dia, mes;

    scanf("%ld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%ld", &dia);
        scanf("%ld", &mes);
        if(dia == 25 && mes == 12) {
            printf("SI\n");
        } else {
            printf("NO\n");
        }
    }
}