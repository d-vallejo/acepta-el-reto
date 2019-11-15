/* A la captura del Doctor Muerte */
#include <stdlib.h>
#include <stdio.h>

typedef struct Armas {
    int x, y, z;
} Arma;

int comp (const void * elem1, const void * elem2) {
    Arma f = *((Arma*)elem1);
    Arma s = *((Arma*)elem2);
    if (f.x < s.x) return -1;
    else if (f.x > s.x) return 1;
    else
        if (f.y > s.y) return -1;
        else if (f.y < s.y) return 1;
        else
            if (f.z < s.z) return -1;
            else if (f.z > s.z) return 1;
    return 0;
}

int main() {
    int v, n, a;
    int i, j;
    while(1) {
        scanf("%d", &v);
        if(v == 0)
            return 0;
        scanf("%d", &n);
        Arma armas[n];
        for(i = 0; i < n; i++) {
            scanf("%d %d", &armas[i].x, &armas[i].y);
            armas[i].z = i+1;
        }
        qsort(armas, sizeof(armas)/sizeof(*armas), sizeof(*armas), comp);
        a = 0;
        for(i = 0; i < n; i++) {
            a = a + armas[i].y;
            if(a >= v)
                break;
        }
        if(a >= v)
            for(j = 0; j <= i; j++)
                if(j == 0)
                    printf("%d", armas[j].z);
                else
                    printf(" %d", armas[j].z);
        else
            printf("MUERTE ESCAPA");
        printf("\n");
    }
}