/* Cálculo mental */
#include <stdio.h>

int main() {
    int numCasos, res, num1, num2;
    char op;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        scanf("%d %c %d", &num1, &op, &num2);
        if(op == '+')
            res = num1 + num2;
        else
            res = num1 - num2;
        printf("%d", res);
        while(1) {
            scanf(" %c", &op);
            if(op == '.')
                break;
            else {
                scanf("%d", &num1);
                if(op == '+')
                    res = res + num1;
                else
                    res = res - num1;
                printf(", %d", res);
            }
        }
        printf("\n");
    }
    return 0;
}