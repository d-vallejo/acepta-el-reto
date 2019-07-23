/* Yo soy tu... */
#include <stdio.h>
#include <string.h>

int main() {
    int numCasos;
    char nombre[101], parentesco[101];
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%s", nombre);
        scanf("%s", parentesco);
        if(strcmp(nombre, "Luke") == 0 && strcmp(parentesco, "padre") == 0)
            printf("TOP SECRET\n");
        else
            printf("%s, yo soy tu %s\n", nombre, parentesco);
    }
    return 0;
}