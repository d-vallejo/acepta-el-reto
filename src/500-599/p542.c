/* La tía Manuela */
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
    int numCasos, a[3], b[3];
    scanf("%d", &numCasos);
    while(numCasos--) {
        scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);
        qsort(a, sizeof(a)/sizeof(*a), sizeof(*a), comp);
        qsort(b, sizeof(b)/sizeof(*b), sizeof(*b), comp);
        if(a[0] < b[0] && a[1] < b[1] && a[2] < b[2])
            printf("SIRVE\n");
        else
            printf("NO SIRVE\n");
    }
    return 0;
}