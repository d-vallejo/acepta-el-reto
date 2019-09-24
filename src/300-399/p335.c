/* Pirámide de canicas */
#include <string.h>
#include <stdio.h>

int main() {
    int n;
    long long a;
    scanf("%d", &n);
    for(; n > 0; n--) {
        scanf("%lld", &a);
        printf("%lld\n", a*(a+1)*(a+2)/6);
    }
    return 0;
}