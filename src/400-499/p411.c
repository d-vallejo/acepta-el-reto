/* Sobre la tela de una araña */
#include <stdio.h>

int main() {
    long long max, peso, num;
    while(1) {
        scanf("%lld", &max);
        if(max == 0) break;
        num = 0;
        while(1) {
            scanf("%lld", &peso);
            if(peso == 0) break;
            max = max - peso;
            if(max >= 0) num++;
        }
        printf("%lld\n", num);
    }
    return 0;
}