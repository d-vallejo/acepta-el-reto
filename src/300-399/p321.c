/* Double decker */
#include <stdio.h>

int main() {
    int sol[5000], a, n, m;
    int i;
    for(i = 0; i < 5000; i++)
        if(i == 0)
            sol[i] = 1;
        else
            sol[i] = sol[i-1] + i;
    scanf("%d", &a);
    while(a--) {
        scanf("%d %d", &n, &m);
        printf("%d\n", sol[n+m] + n);    
    }
    return 0;
}