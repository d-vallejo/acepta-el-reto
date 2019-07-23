/* La abuela María */
#include <stdio.h>

int main() {
    int numCasos, superiores[6], num, suma, i, flag;
    scanf("%d", &numCasos);
    while(numCasos--) {
        flag = 1;
        for(i = 0; i < 6; i++) {
            scanf("%d", &superiores[i]);
        }
        for(i = 0; i < 6; i++) {
            scanf("%d", &num);
            if(i == 0) suma = num + superiores[i];
            else {
                if(superiores[i]+num != suma) flag = 0;
            }
        }
        if(flag) printf("SI\n");
        else printf("NO\n");
    }
}