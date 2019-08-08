/* Gregorio XIII */
#include <stdio.h>

int main() {

    int numCasos, anio;

    scanf("%d", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%d", &anio);
        if(anio % 4) {
            printf("28\n");
        } else {
            if(anio % 100) {
                printf("29\n");
            } else {
                if(anio % 400) {
                    printf("28\n");
                } else {
                    printf("29\n");
                }
            }
        }
    }
    return 0;
}