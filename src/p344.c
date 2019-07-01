/* Conectando cables */
#include <stdio.h>

int main() {
    int numCasos, numCables, numM, numH, num;
    char c;
    scanf("%d", &numCasos);
    while(numCasos--) {
        numM = 0;
        numH = 0;
        num = 0;
        scanf("%d", &numCables);
        while(num/2 < numCables) {
            scanf("%c", &c);
            if(c == 'M') {
                numM++;
                num++;
            } else if(c == 'H') {
                numH++;
                num++;
            }
        }
        if(numM == numH) printf("POSIBLE\n");
        else printf("IMPOSIBLE\n");
    }
    return 0;
}