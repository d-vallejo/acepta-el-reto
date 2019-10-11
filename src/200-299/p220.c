/* ¡Pasa la calculadora! */
#include <stdio.h>

int dynamic[32][10];

int game(int num, int pulsa) {
    int res;
    if(num > 30)
        return 1;
    if(dynamic[num][pulsa] == 2) {
        if(pulsa == 1) res = !game(num+2, 2) || !game(num+3, 3) || !game(num+4, 4) || !game(num+7, 7);
        if(pulsa == 2) res = !game(num+1, 1) || !game(num+3, 3) || !game(num+5, 5) || !game(num+8, 8);
        if(pulsa == 3) res = !game(num+1, 1) || !game(num+2, 2) || !game(num+6, 6) || !game(num+9, 9);
        if(pulsa == 4) res = !game(num+5, 5) || !game(num+6, 6) || !game(num+1, 1) || !game(num+7, 7);
        if(pulsa == 5) res = !game(num+4, 4) || !game(num+6, 6) || !game(num+2, 2) || !game(num+8, 8);
        if(pulsa == 6) res = !game(num+4, 4) || !game(num+5, 5) || !game(num+3, 3) || !game(num+9, 9);
        if(pulsa == 7) res = !game(num+8, 8) || !game(num+9, 9) || !game(num+1, 1) || !game(num+4, 4);
        if(pulsa == 8) res = !game(num+7, 7) || !game(num+9, 9) || !game(num+2, 2) || !game(num+5, 5);
        if(pulsa == 9) res = !game(num+7, 7) || !game(num+8, 8) || !game(num+3, 3) || !game(num+6, 6);
        dynamic[num][pulsa] = res;
        return res;
    } else
        return dynamic[num][pulsa];
}

int main() {
    int numCasos, num, pulsa;
    int i, j;
    scanf("%d", &numCasos);
    for(i = 0; i < 32; i++) {
        for(j = 0; j < 10; j++) {
            dynamic[i][j] = 2;
        }
    }
    for(; numCasos > 0; numCasos--) {
        scanf("%d %d", &num, &pulsa);
        if(game(num, pulsa))
            printf("GANA\n");
        else
            printf("PIERDE\n");
    }
    return 0;
}