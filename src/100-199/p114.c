/* Último dígito del factorial */
#include <stdio.h>

int main() {
    int a, n;
    scanf("%d", &a);
    while(a--) {
        scanf("%d", &n);
        if(n == 0)
            printf("1\n");
        else if(n == 3)
            printf("6\n");
        else if(n < 5)
            printf("%d\n", n);
        else
            printf("0\n");
    }
    return 0;
}