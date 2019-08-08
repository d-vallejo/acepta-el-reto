/* Pistas de aterrizaje */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char in[4], numero[3];
    int out;
    while(scanf("%s", in) != EOF) {
        strncpy(numero, in, 2);
        if(strlen(in) == 2) {
            out = (atoi(numero)+18)%36; 
            if(out == 0)
                printf("36");
            else
                printf("%02d", out);
        } else {
            out = (atoi(numero)+18)%36; 
            if(out == 0)
                printf("36");
            else
                printf("%02d", out);
            if(in[2] == 'C')
                printf("C");
            else if(in[2] == 'L')
                printf("R");
            else
                printf("L");
        }
        printf("\n");
    }
    return 0;
}