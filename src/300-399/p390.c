/* Pixel Art */
#include <stdio.h>
#include <string.h>

int main() {
    int numCasos, m, a, c;
    char caso[100001];
    int i, l;
    scanf("%d", &numCasos);
    for(; numCasos > 0; numCasos--) {
        scanf("%d %d %d", &m, &a, &c);
        scanf("%s", caso);
        l = strlen(caso);
        for(i = 0; i < l; i++) {
            if(caso[i] == 'M')
                m--;
            else if(caso[i] == 'A')
                a--;
            else if(caso[i] == 'C')
                c--;
            else if(caso[i] == 'R') {
                m--;a--;
            } else if(caso[i] == 'N') {
                m--;a--;c--;
            } else if(caso[i] == 'V') {
                a--;c--;
            } else if(caso[i] == 'L') {
                m--;c--;
            }
            if(m < 0 || a < 0 || c < 0)
                break;
        }
        if(m < 0 || a < 0 || c < 0)
            printf("NO\n");
        else
            printf("SI %d %d %d\n", m, a, c);
    }
    return 0;
}