/* ¿En qué volumen? */
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &m);
        printf("%d\n", m / 100);
    }
    return 0;
}