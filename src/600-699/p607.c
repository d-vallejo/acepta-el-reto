#include <stdio.h>

int copiar(int copias, int n, int res) {
    if(copias > 2*n)
        return copiar(copias, 2*n, res + 1);
    else
        return res;
}

int main() {
    int numCasos, numFrases;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d", &numFrases);
        if(numFrases == 1)
            printf("0\n");
        else
            printf("%d\n", copiar(numFrases, 1, 1));
    }
    return 0;
}