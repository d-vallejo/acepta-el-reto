/* Giratiempo */
#include <stdio.h>
#define MAX 3599

int main() {
    int numCasos;
    long long num, res;
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%lld", &num);
        res = num + num/MAX;
        if(num % MAX == 0) 
            res--;
        printf("%lld\n", res);
    }
    return 0;
}