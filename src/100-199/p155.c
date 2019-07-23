/* Perímetro de un rectángulo */
#include <stdio.h>

int main () {
    int x, y;
    while(1) {
        scanf("%d", &x);
        if(x < 0) {
            break;
        }
        scanf("%d", &y);
        if(y < 0) {
            break;
        }
        printf("%d\n", 2*x + 2*y);
    }
    return 0;
}