/* Paréntesis balanceados */
#include <string.h>
#include <stdio.h>

int main() {
    char input[10001], symbols[10001];
    int res, len;
    int i, j;
    while(1) {
        if(scanf("%[^\n]%*c", input) == EOF)
            return 0;
        res = 1;
        j = -1;
        len = strlen(input);
        for(i = 0; i < len && res; i++) {
            if(input[i] == '(') {
                j++;
                symbols[j] = '(';
            } else if(input[i] == ')') {
                if(symbols[j] == '(')
                    j--;
                else
                    res = 0;
            }
            if(input[i] == '{') {
                j++;
                symbols[j] = '{';
            } else if(input[i] == '}') {
                if(symbols[j] == '{')
                    j--;
                else
                    res = 0;
            }
            if(input[i] == '[') {
                j++;
                symbols[j] = '[';
            } else if(input[i] == ']') {
                if(symbols[j] == '[')
                    j--;
                else
                    res = 0;
            }
        }
        if(res && j == -1) printf("YES\n");
        else printf("NO\n");
    }
}