/* Caramelos de reyes */
#include <stdio.h>

int main() {

    long numNinos, numCaramelos, caramelos;

    while(1) {
        scanf("%ld", &caramelos);
        if(caramelos == 0) {
            break;
        }
        numNinos = 0;
        numCaramelos = 0;
        numCaramelos = numCaramelos + caramelos;
        numNinos++;
        while(1) {
            scanf("%ld", &caramelos);
            if(caramelos == 0) {
                break;
            }
            numCaramelos = numCaramelos + caramelos;
            numNinos++;
        }
        if(numCaramelos % numNinos) {
            printf("IMPOSIBLE\n");
        } else {
            printf("REPARTO JUSTO\n");
        }
    }
    return 0;
}