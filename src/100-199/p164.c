/* Área de un rectángulo */
#include <stdio.h>

int main() {
    int abajoX, abajoY, arribaX, arribaY;
    while(1) {
        scanf("%d", &abajoX);
        scanf("%d", &abajoY);
        scanf("%d", &arribaX);
        if(arribaX < abajoX) {
            break;
        }
        scanf("%d", &arribaY);
        if(arribaY < abajoY) {
            break;
        }
        printf("%d\n", (arribaX - abajoX) * (arribaY - abajoY));
    }
    return 0;
}