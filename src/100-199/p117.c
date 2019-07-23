/* La fiesta aburrida */
#include <stdio.h>

int main (){
    long numPersonas;
    char soy[4], nombre[101];
    scanf("%ld", &numPersonas);
    for( ; numPersonas > 0; numPersonas--) {
        scanf("%s %s", soy, nombre);
        printf("Hola, %s.\n", nombre);
    }
    return 0;
}