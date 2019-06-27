/* Siete picos */
#include <stdio.h>

int main() {
    int numCasos, nums[1000], numAnterior, numPicos, i;
    while(1) {
        scanf("%d", &numCasos);
        if(numCasos == 0) break;
        numPicos = 0;
        for(i = 0; i < numCasos; i++) {
            scanf("%d", &nums[i]);
            if(i == numCasos-1) {
                if(nums[i] > numAnterior && nums[i] > nums[0]) numPicos++;
                if(nums[0] > nums[i] && nums[0] > nums[1]) numPicos++;
            } 
            if(i > 1)
                if(numAnterior > nums[i] && numAnterior > nums[i-2]) numPicos++;
            numAnterior = nums[i];
        }
        printf("%d\n", numPicos);
    }
    return 0;
}