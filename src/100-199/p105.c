/* Ventas */
#include <stdio.h>

int main() {
    double num, min, max, sum;
    int minindex, maxindex, aux;
    int i, j;
    while(1) {
        scanf("%lf", &num);
        if(num == -1)
            return 0;
        min = num;
        minindex = 0;
        max = num;
        maxindex = 0;
        sum = num;
        for(i = 1; i < 6; i++) {
            scanf("%lf", &num);
            if(num < min) {
                min = num;
                minindex = i;
            } else if(num > max) {
                max = num;
                maxindex = i;
            }
            sum = sum + num;
        }
        if(maxindex == 0) printf("MARTES ");
        else if(maxindex == 1) printf("MIERCOLES ");
        else if(maxindex == 2) printf("JUEVES ");
        else if(maxindex == 3) printf("VIERNES ");
        else if(maxindex == 4) printf("SABADO ");
        else printf("DOMINGO ");
        if(minindex == 0) printf("MARTES ");
        else if(minindex == 1) printf("MIERCOLES ");
        else if(minindex == 2) printf("JUEVES ");
        else if(minindex == 3) printf("VIERNES ");
        else if(minindex == 4) printf("SABADO ");
        else printf("DOMINGO ");
        if(num > sum/6)
            printf("SI\n");
        else
            printf("NO\n");
    }
}