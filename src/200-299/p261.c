/* Voltea el dado */
#include <stdio.h>

int dynamic[1001][7];

int game(int num, int cara) {
    int res;
    if(num > 999)
        return 1;
    if(dynamic[num][cara] == 2) {
        if(cara == 1) res = !game(num+2, 2) || !game(num+3, 3) || !game(num+4, 4) || !game(num+5, 5);
        if(cara == 2) res = !game(num+1, 1) || !game(num+3, 3) || !game(num+4, 4) || !game(num+6, 6);
        if(cara == 3) res = !game(num+1, 1) || !game(num+2, 2) || !game(num+5, 5) || !game(num+6, 6);
        if(cara == 4) res = !game(num+1, 1) || !game(num+2, 2) || !game(num+5, 5) || !game(num+6, 6);
        if(cara == 5) res = !game(num+1, 1) || !game(num+3, 3) || !game(num+4, 4) || !game(num+6, 6);
        if(cara == 6) res = !game(num+2, 2) || !game(num+3, 3) || !game(num+4, 4) || !game(num+5, 5);
        dynamic[num][cara] = res;
        return res;
    } else
        return dynamic[num][cara];
}

int main() {
    int numCasos, num, cara;
    int i, j;
    scanf("%d", &numCasos);
    for(i = 0; i < 1001; i++) {
        for(j = 0; j < 7; j++) {
            dynamic[i][j] = 2;
        }
    }
    for(; numCasos > 0; numCasos--) {
        scanf("%d %d", &num, &cara);
        if(game(num, cara))
            printf("GANA\n");
        else
            printf("PIERDE\n");
    }
    return 0;
}