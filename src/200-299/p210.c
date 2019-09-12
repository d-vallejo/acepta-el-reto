/* Primo de riesgo */
#include <stdio.h>
#include <string.h>
#include <math.h>

int esPrimo(int n) {
    int i;
    for(i = 2; i < sqrt(n)+1; i++) {
        if((n % i) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, suma;
    char palabra[51];
    int i;
    scanf("%d", &n);
    while(n--) {
        scanf("%s", palabra);
        suma = 0;
        for(i = 0; i < strlen(palabra); i++) {
            suma = suma + palabra[i];
        }
        if(suma % 2)
            suma = suma - 2;
        else
            suma--;
        while(esPrimo(suma) == 0)
            suma = suma - 2;
        printf("%d\n", suma);
    }
    return 0;
}