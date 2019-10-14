/* Haciendo pajaritas de papel */
#include <stdio.h>

int func(int ancho, int alto) {
    int res;
    if(alto < 10 || ancho < 10)
        return 0;
    if(ancho > alto) {
        res = ancho / alto;
        ancho = ancho - res*alto;
        return res + func(ancho, alto);
    } else {
        res = alto / ancho;
        alto = alto - res*ancho;
        return res + func(ancho, alto);
    }
}

int main () {
    int ancho, alto;
    while(1) {
        scanf("%d %d", &ancho, &alto);
        if(ancho == 0 && alto == 0)
            return 0;
        printf("%d\n", func(ancho, alto));
    }
}