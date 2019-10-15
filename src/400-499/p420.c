/* El secreto de la bolsa */
#include <string.h>
#include <stdio.h>

int main() {
    int numCasos, sumaClave, res, suma, len;
    char input[250001];
    int i, j;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        scanf("%d %s", &sumaClave, input);
        i = res = 0;
        j = 0;
        suma = input[0]-'0';
        len = strlen(input);
        while(i < len && j < len) {
            if(suma < sumaClave) {
                j++;
                suma = suma + (input[j]-'0');
            } else if(suma == sumaClave) {
                res++;
                suma = suma - (input[i]-'0');
                i++;
            } else {
                suma = suma - (input[i]-'0');
                i++;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}