/* Suma de dígitos */
#include <stdio.h>
#include <string.h>

int main() {
    char num[11];
    int sum, i;
    while(1) {
        scanf("%s", num);
        if(num[0] == '-') break;
        sum = 0;
        for(i = 0; i < strlen(num); i++) {
            sum = sum + num[i]-48;
            if(i == strlen(num)-1) printf("%d = %d\n", num[i]-48, sum);
            else printf("%d + ", num[i]-48);
        }
    }
    return 0;
}