/* Poniendo la mesa */
#include <stdio.h>

int main() {
    int num;
    while(1) {
        scanf("%d", &num);
        if(num == 0) break;
        if(num == 1)
            printf("%d\n", num);
        else if(num % 2) 
            printf("%d\n", num-1); 
        else
            printf("%d\n", num);
    }
    return 0;
}