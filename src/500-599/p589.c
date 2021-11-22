/* Igualando copas */
#include <stdio.h>
#include <limits.h>

int main() {
    long long n, num, max, sum;
    int i;
    while(1) {
        scanf("%lld", &n);
        if(n == 0)
            break;
        max = INT_MIN;
        sum = 0;
        for(i = 0; i < n; i++) {
            scanf("%lld", &num);
            if(num > max)
                max = num;
            sum = sum + num;
        }     
        printf("%lld\n", max * n - sum);  
    }
    return 0;
}