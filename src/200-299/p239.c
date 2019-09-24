/* Pi. Pi. Pi. Pi. Pi. Piiiii */
#include <stdio.h>

int main() {
    int a, b, c;
    while(1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
            return 0;
        c = a * b * 144;
        printf("%d:", c / (60*60*24));
        c = c % (60*60*24);
        printf("%02d:", c / (60*60));
        c = c % (60*60);
        printf("%02d:", c / 60);
        c = c % 60;
        printf("%02d\n", c);
    }
}