/* Artrópodos */
#include <stdio.h>

int main() {

    long numCasos, num6, num8, num10, numBichos, num2;

    scanf("%ld", &numCasos);
    for( ; numCasos > 0; numCasos--) {
        scanf("%ld %ld %ld %ld %ld", &num6, &num8, &num10, &numBichos, &num2);
        printf("%ld\n", 6 * num6 + 8 * num8 + 10 * num10 + 2 * num2 * numBichos);
    }
    return 0;
}