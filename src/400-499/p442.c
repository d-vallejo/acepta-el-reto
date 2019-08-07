/* Camellos, serpientes y kebabs */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char in[21], _case[21];
    int i;
    while(scanf("%s %s", in, _case) != EOF) {
        for(i = 0; i < strlen(in); i++) {
            if(strcmp(_case, "CamelCase") == 0) {
                if(i == 0) {
                    printf("%c", toupper(in[i]));
                } else if(in[i] == '-' || in[i] == '_') {
                    i++;
                    printf("%c", toupper(in[i]));
                } else {
                    printf("%c", in[i]);
                }
            } else if(strcmp(_case, "snake_case") == 0) {
                if(i == 0) {
                    printf("%c", tolower(in[i]));
                } else if(in[i] == '-') {
                    printf("_");
                } else if(in[i] == toupper(in[i]) && in[i] != '_') {
                    printf("_%c", tolower(in[i]));
                } else {
                    printf("%c", in[i]);
                }
            } else {
                if(i == 0) {
                    printf("%c", tolower(in[i]));
                } else if(in[i] == '_') {
                    printf("-");
                } else if(in[i] == toupper(in[i]) && in[i] != '-') {
                    printf("-%c", tolower(in[i]));
                } else {
                    printf("%c", in[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}