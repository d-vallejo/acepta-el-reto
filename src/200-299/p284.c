/* La tienda de la esquina */
#include <stdio.h>

int main() {
    int numCasos, a, b, res, e2, e1, c50, c20, c10, c5, c2, c1;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        scanf("%d %d", &a, &b);
        if(a > b)
            printf("DEBE %d\n", a-b);
        else {
            e2 = e1 = c50 = c20 = c10 = c5 = c2 = c1 = 0;
            res = b-a;
            while(res > 0) {
                if(res / 200) {
                    e2 = res / 200; res = res % 200;
                }
                if(res / 100) {
                    e1 = res / 100; res = res % 100;
                }
                if(res / 50) {
                    c50 = res / 50; res = res % 50;
                }
                if(res / 20) {
                    c20 = res / 20; res = res % 20;
                }
                if(res / 10) {
                    c10 = res / 10; res = res % 10;
                }
                if(res / 5) {
                    c5 = res / 5; res = res % 5;
                }
                if(res / 2) {
                    c2 = res / 2; res = res % 2;
                }
                if(res / 1) {
                    c1 = res / 1; res = res % 1;
                }
            }
            printf("%d %d %d %d %d %d %d %d\n", e2, e1, c50, c20, c10, c5, c2, c1);
        }
    }
    return 0;
}