/* Gorros de colores */
#include <stdio.h>
#include <string.h>

int main() {
    int n, res;
    int i;
    char gorros[1000];
    scanf("%d", &n);
    while(n--) {
        res = 0;
        scanf("%s", gorros);
        for(i = 0; i < strlen(gorros)-1; i++) {
            if(gorros[i] == gorros[i+1])
                res++;
            res++;
            i++;
        }
        printf("%d\n", res);
    }
    return 0;
}