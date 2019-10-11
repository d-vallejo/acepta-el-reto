/* De nuevo en el bar de Javier */
#include <stdio.h>

int main() {
    char c, desc[5][11] = {"DESAYUNOS#", "COMIDAS#", "MERIENDAS#", "CENAS#", "COPAS#"};
    double v, min, max, values[5] = {0}, sum = 0;
    int countMax, countMin, indexMax, indexMin, numC = 0, numT = 0;
    int i;
    while(1) {
        if(scanf("%c %lf%*c", &c, &v) == EOF)
            return 0;
        switch(c) {
            case 'D':
                values[0] = values[0] + v; sum = sum + v; numT++; break;
            case 'A':
                values[1] = values[1] + v; sum = sum + v; numT++; numC++; break;
            case 'M':
                values[2] = values[2] + v; sum = sum + v; numT++; break;
            case 'I':
                values[3] = values[3] + v; sum = sum + v; numT++; break;
            case 'C':
                values[4] = values[4] + v; sum = sum + v; numT++; break;
            default:
                max = min = values[0]; countMax = countMin = 1; indexMin = indexMax = 0;
                for(i = 1; i < 5; i++) {
                    if(values[i] < min) {
                        min = values[i]; countMin = 1; indexMin = i;
                    } else if(values[i] == min)
                        countMin++;
                    if(values[i] > max) {
                        max = values[i]; countMax = 1; indexMax = i;
                    } else if(values[i] == max)
                        countMax++;
                }
                (countMax > 1) ? printf("EMPATE#") : printf("%s", desc[indexMax]);
                (countMin > 1) ? printf("EMPATE#") : printf("%s", desc[indexMin]);
                (values[1] / numC > sum / numT) ? printf("SI\n") : printf("NO\n");
                for(i = 0; i < 5; i++) values[i] = 0;
                numC = numT = 0;
                sum = 0;
                break;
        }
    }
}