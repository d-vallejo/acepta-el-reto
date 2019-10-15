/* El incidente de Dhahran */
#include <string.h>
#include <stdio.h>

int main() {
    char input[1001];
    int len;
    int i, j, k;
    while(1) {
        if(scanf("%s", input) == EOF)
            return 0;
        len = strlen(input);
        for(k = 0; k < len; k++) {
            if(input[k] == '.')
                break;
        }
        for(i = 0; input[i] == '0'; i++);
        for(j = len-1; j > k-1;) {
            if(input[j] == '0')
                j--;
            else
                break;
        }
        if(i == k) i--;
        if(j == k) j--;
        for(; i < j+1; i++) {
            printf("%c", input[i]);
        }
        printf("\n");
    }
}