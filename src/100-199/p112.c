/* Radares de tramo */
#include <stdio.h>

int main() {
    double a, b, c;
    while(1) {
        scanf("%lf %lf %lf", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0)
            return 0;
        if(a <= 0 || b <= 0 || c <= 0)
            printf("ERROR\n");
        else {
            a = a / 1000;
            c = c / 3600;
            if(a/c < b)
                printf("OK\n");
            else
                if(a/c < b*1.2)
                    printf("MULTA\n");
                else
                    printf("PUNTOS\n");
        }
    }
}