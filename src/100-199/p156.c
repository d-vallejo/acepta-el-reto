/* Ascensor */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int anterior, siguiente, suma;
    while(1) {
        scanf("%d", &anterior);
        if(anterior < 0)
            return 0;
        suma = 0;
        while(1) {
            scanf("%d", &siguiente);
            if(siguiente == -1)
                break;
            suma = suma + abs(anterior-siguiente);
            anterior = siguiente;
        }
        printf("%d\n", suma);
    }
}