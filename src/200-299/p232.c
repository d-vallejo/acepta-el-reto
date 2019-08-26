/* ¡Feliz no cumpleaños! */
#include <stdio.h>

int main() {
    int dia, mes, anio, day, month, year, meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    long long sum, sum1, sum2;
    while(1) {
        scanf("%d %d %d %d %d %d", &dia, &mes, &anio, &day, &month, &year);
        if(dia == 0 && mes == 0 && anio == 0 && day == 0 && month == 0 && year == 0)
            return 0;
        if(dia == day && mes == month)
            printf("0\n");
        else {
            sum1 = anio*365+dia;
            for(i = 0; i < mes-1; i++) {
                sum1 = sum1 + meses[i];
            }
            sum2 = year*365+day;
            for(i = 0; i < month-1; i++) {
                sum2 = sum2 + meses[i];
            }
            sum = sum2-sum1-(year-anio-1);
            if(day > dia && mes == month || month > mes)
                sum--;
            printf("%lld\n", sum);
        }
    }
}