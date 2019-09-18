/* En campos de fútbol */
#include <stdio.h>

int main() {
    int n;
    double a, b, c;
    scanf("%d", &n);
    for(; n > 0; n--) {
        scanf("%lf %lf", &a, &b);
        c = a / b;
        if(c >= 45*90 && c <= 90*120)
            printf("SI\n");
        else
            printf("NO\n");
    }
    return 0;
}