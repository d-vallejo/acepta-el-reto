#include <stdio.h>
#include <math.h>

void main() {
	int numCasos, numUvas, numMalas, numNecesarias;
	scanf("%d", &numCasos);
	for(; numCasos > 0; numCasos--) {
		scanf("%d %d %d", &numUvas, &numMalas, &numNecesarias);
		printf("%d\n", numUvas / numNecesarias * numMalas + (((numUvas % numNecesarias) > numMalas) ? numMalas : (numUvas % numNecesarias))); 
	}
}
