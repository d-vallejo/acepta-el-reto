/* ¿Es matriz identidad? */
#include <stdio.h>

int main() {
    int matrix[50][50], n, res;
    int i, j;
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            return 0;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        res = 1;
        for(i = 0; i < n && res; i++) {
            for(j = 0; j < n && res; j++) {
                if(i == j)
                    if(matrix[i][j] == 1)
                        res = 1;
                    else
                        res = 0;
                else
                    if(matrix[i][j] == 0)
                        res = 1;
                    else
                        res = 0;
            }
        }
        if(res)
            printf("SI\n");
        else
            printf("NO\n");
    }
}