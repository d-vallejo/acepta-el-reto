#include <stdio.h>

int a[31];
int b[31];

void cuando_sere_rico() {
    int sum;
    int i;
    a[0] = a[1] = b[0] = 1;
    b[1] = sum = 2;
    for(i = 2; i < 31; i++) {
        a[i] = a[i-2] * 2 + a[i-1];
        sum = sum + a[i];
        b[i] = sum;
    }
}

int main() {
    int numCasos, num;
    int i;
    cuando_sere_rico();
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d", &num);
        for(i = 0; i < 31; i++) {
            if(b[i] >= num) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    return 0;
}