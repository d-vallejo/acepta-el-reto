#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);
    for(; n > 0; n--) {
        scanf("%d", &a);
        printf("%d %d\n", a, a*2);
    }
}