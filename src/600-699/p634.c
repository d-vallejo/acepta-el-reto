/* Bandurria Hero */
#include <stdio.h>

int main() {
    int n, i, total, combo;
    char a[10000];
    scanf("%d", &n);
    for(; n > 0; n--) {
        total = 0;
        combo = 0;
        scanf("%s", a);
        for(i = 0; i < strlen(a); i++) {
            if(a[i] == 'O') {
                combo = combo + 10;
                total = total + combo;
            } else {
                combo = 0;
            }
        }
        printf("%d\n", total);
    }
}