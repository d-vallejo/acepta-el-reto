/* El anuncio más caro del año */
#include <stdio.h>

int main() {

    long numCasos, horas, minutos, segundos;

    scanf("%ld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%ld:%ld:%ld", &horas, &minutos, &segundos);
        if(segundos > 0) {
            minutos++;
        }
        if(minutos > 0) {
            horas++;
        }
        if(horas == 0) {
            horas = 24;
        }
        if(minutos == 0) {
            minutos = 60;
        }
        if(segundos == 0) {
            segundos = 60;
        }
        printf("%02ld:%02ld:%02ld\n", 24 - horas, 60 - minutos, 60 - segundos);
    }
    return 0;
}