/* Las perlas de la condesa */
#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f < s) return -1;
    if (f > s) return 1;
    return 0;
}

int main() {
    long long input[1000], output[1000];
    int len, res;
    int i, j, k;
    while(1) {
        scanf("%lld", &input[0]);
        if(input[0] == 0)
            return 0;
        len = 1;
        for(i = 1; ; i++) {
            scanf("%lld", &input[i]);
            if(input[i] == 0)
                break;
            len++;
        }
        if(len % 2) {
            qsort(input, len, sizeof(long long), comp);
            res = 1;
            for(i = 0, j = 0, k = len-1; i < len; i = i + 2) {
                if(input[i] == input[i+1] && i < len-1) {
                    output[j] = input[i]; j++;
                    output[k] = input[i]; k--;
                } else if(i == len-1) {
                    output[j] = input[i];
                } else {
                    res = 0;
                }
            }
            if(res) {
                for(i = 0; i < len; i++) {
                    if(i == 0)
                        printf("%lld", output[i]);
                    else
                        printf(" %lld", output[i]);
                }
                printf("\n");
            } else
                printf("NO\n");
        } else
            printf("NO\n");
        
    }
}