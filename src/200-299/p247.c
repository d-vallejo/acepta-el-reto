/* Saliendo de la crisis */
#include <stdio.h>

int main() {
    int nm, n, m, res;
    while(1) {
        scanf("%d", &nm);
        if(nm == 0)
            return 0;
        res = 1;
        m = 0;
        for(; nm > 0; nm--) {
            scanf("%d", &n);
            if(n < m+1)
                res = 0;
            m = n;
        }
        if(res)
            printf("SI\n");
        else
            printf("NO\n");
    }
}