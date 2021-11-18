/* Salvados por el 9 */
#include <stdio.h>

int main() {
    int numCasos, cero, nueve;
    float nota;
    int i;
    scanf("%d", &numCasos);
    while(numCasos--) {
        cero = 0;
        nueve = 0;
        for(i = 0; i < 5; i++) {
            scanf("%f", &nota);
            if(nota == 0.0)
                cero = 1;
            else if(nota > 8.9)
                nueve = 1;
        }
        if(cero == 1 && nueve == 1)
            printf("MEDIA\n");
        else if(cero == 1)
            printf("SUSPENSO DIRECTO\n");
        else
            printf("MEDIA\n");
    }
    return 0;
}