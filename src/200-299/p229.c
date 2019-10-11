/* Cuentas paralelas */
#include <stdio.h>

int main() {
    int n, nums[100000], res, sum1, sum2;
    int i;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            return 0;
        sum1 = 0;
        for(i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
            sum1 = sum1 + nums[i];
        }
        sum2 = res = 0;
        if(sum1 == sum2) res++;
        for(i = 0; i < n; i++) {
            sum1 = sum1 - nums[i];
            sum2 = sum2 + nums[i];
            if(sum1 == sum2) res++;
        }
        printf("%d\n", res);
    }
}