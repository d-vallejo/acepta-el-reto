/* Base raíz de 10 */
#include <stdio.h>
#include <string.h>

int main() {
    char n[102];
    int i;
    while(1) {
        if(scanf("%s", n) == EOF)
            return 0;
        for(i = 0; i < strlen(n); i++) {
            if(i == strlen(n)-1) {
                printf("%c\n", n[i]);
            } else {
                printf("%c0", n[i]);
            }
        }        
    }
}