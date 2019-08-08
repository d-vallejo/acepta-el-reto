/* Romance en el palomar */
#include <stdio.h>

int main (){

    long numCasos, numPalomas, numHabitaculos;

    scanf("%ld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%ld %ld", &numPalomas, &numHabitaculos);
        if(numPalomas > numHabitaculos) {
            printf("PRINCIPIO\n");
        } else {
            printf("ROMANCE\n");
        }
    }
    return 0;
}