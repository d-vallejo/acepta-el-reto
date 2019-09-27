/* Asamblea General de Indiana */
#include <stdio.h>

int main() {
    int m, d, meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(1) {
        scanf("%d.%d", &m, &d);
        if(m == 0 && d == 0)
            return 0;
        if(m > 0 && m < 13)
            if(d > 0 && d < meses[m-1]+1)
                printf("SI\n");
            else
                printf("NO\n");
        else
            printf("NO\n");
    }
}