/* Nochevieja */
#include <stdio.h>

int main() {
    long horas, minutos;
    while(1) {
        scanf("%ld:%ld", &horas, &minutos);
        if(horas == 0 && minutos == 0) {
            break;
        }
        horas++;
        printf("%ld\n", 60 - minutos + 60 * (24 - horas));
    }
    return 0;
}