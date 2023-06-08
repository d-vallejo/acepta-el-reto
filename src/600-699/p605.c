#include <stdio.h>
#include <string.h>

int main() {
    char prendas[2];
    int verano, invierno;
    while(1) {
        scanf("%s", prendas);
        if(!strcmp(prendas, "."))
            break;
        verano = 0;
        invierno = 0;
        while(1) {
            if(!strcmp(prendas, ".")) {
                if(verano == invierno)
                    printf("EMPATE\n");
                else if(verano > invierno)
                    printf("VERANO\n");
                else
                    printf("INVIERNO\n");
                break;
            }
            if(!strcmp(prendas, "V"))
                verano++;
            else if(!strcmp(prendas, "I"))
                invierno++;
            else if(!strcmp(prendas, "A")) {
                verano++;
                invierno++;
            }
            scanf("%s", prendas);
        }
    }
    return 0;
}