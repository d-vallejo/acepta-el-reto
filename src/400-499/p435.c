/* El Pijote */
#include <stdio.h>
#include <string.h>

int main() {
    char numeros[1001];
    int i, j;
    while(scanf("%s", numeros) != EOF) {
        int apariciones[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for(i = 0; i < strlen(numeros); i++) {
            apariciones[numeros[i]-'0']++;
        }
        for(i = 0; i < 10; i++) {
            if(i == 0)
                j = apariciones[i];
            if(apariciones[i] != j) {
                printf("no subnormal\n");
                break;
            }
            if(i == 9)
                printf("subnormal\n");
        }
    }
    return 0;
}