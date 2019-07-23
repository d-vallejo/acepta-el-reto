/* Chicles de regalo */
#include <stdio.h>

int main (){
    long numRegalo, numEnvoltorios, numChicles, numComidos, numEnvoltoriosRestantes;
    while(1) {
        numComidos = 0;
        numEnvoltoriosRestantes = 0;
        scanf("%ld", &numEnvoltorios);
        if(numEnvoltorios == 0) {
            break;
        }
        scanf("%ld", &numRegalo);
        scanf("%ld", &numChicles);
        if(numRegalo >= numEnvoltorios && numChicles >= numEnvoltorios) {
            printf("RUINA\n");
        } else if(numRegalo == 0) {
            numComidos = numChicles;
            printf("%ld %ld\n", numComidos, numChicles);
        } else {
            while(numChicles > 0) {
                numComidos += numChicles;
                numEnvoltoriosRestantes += numChicles;
                numChicles = 0;
                numChicles = numEnvoltoriosRestantes / numEnvoltorios * numRegalo;
                numEnvoltoriosRestantes -= numEnvoltoriosRestantes / numEnvoltorios * numEnvoltorios;
            }
            printf("%ld %ld\n", numComidos, numEnvoltoriosRestantes);
        }
    }
    return 0;
}