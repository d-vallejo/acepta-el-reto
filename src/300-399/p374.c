/* Criogenización */
#include <stdio.h>

int main() {
    int numCasos;
    long long min, max, numMin, numMax, num;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%lld", &num);
        min = num;
        max = num;
        numMin = 1;
        numMax = 1;
        while(1) {
            scanf("%lld", &num);
            if(num == 0) 
                break;
            if(num < min) {
                min = num;
                numMin = 1;
            } else if(num == min) 
                numMin++;
            if(num > max) {
                max = num;
                numMax = 1;
            } else if(num == max) 
                numMax++;
        }
        printf("%lld %lld %lld %lld\n", min, numMin, max, numMax);
    }
    return 0;
}