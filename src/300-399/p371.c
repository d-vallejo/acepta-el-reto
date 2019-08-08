/* Aburrimiento en las sobremesas */
#include <stdio.h>

int main() {
    int a;
    while(1) {
        scanf("%d", &a);
        if(a == 0)
            break;
        printf("%d\n", a*3 + a*(a-1)/2*3);
    }
}