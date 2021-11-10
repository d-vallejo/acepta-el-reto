/* Duración de bombillas LED */
#include <stdio.h>

int main() {
    int numCasos, a, b, c;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d %d", &a, &b, &c);
        if(a > b * c)
            printf("ENCENDIDOS\n");
        else if(a < b * c)
            printf("HORAS\n");
        else
            printf("AMBAS\n");
    }
    return 0;
}