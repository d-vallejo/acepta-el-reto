/* Tarta Sacher */
#include <stdio.h>

int main() {
    int numCasos, num1, num2, numCuadrados;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d %d", &num1, &num2, &numCuadrados);
        if(num1*num2 > numCuadrados)
            printf("1\n");
        else
            if(numCuadrados % (num1*num2))
                printf("%d\n", numCuadrados / (num1*num2) + 1);
            else
                printf("%d\n", numCuadrados / (num1*num2));
    }
    return 0;
}