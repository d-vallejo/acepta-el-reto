/* Menor número con la misma suma de dígitos */
#include <stdio.h>

int main() {
    int num, res, n;
    int i;
    while(1) {
        scanf("%d", &num);
        if(num == 0)
            return 0;
        res = num % 9;
        n = num / 9;
        if(res > 0)
            printf("%d", res);
        for(i = 0; i < n; i++)
            printf("9");
        printf("\n");
    }
}