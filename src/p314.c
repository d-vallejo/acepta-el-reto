#include <stdio.h>
#include <string.h>

int main() {
	int numCasos, numTemperaturas, temperaturas[10000], i, temperaturaAnterior, numPicos, numValles;
	scanf("%d", &numCasos);
	while(numCasos--) {
		scanf("%d", &numTemperaturas);
		memset(temperaturas, 0, sizeof(temperaturas));
		numPicos = 0;
		numValles = 0;
		for(i = 0; i < numTemperaturas; i++) {
			scanf("%d", &temperaturas[i]);
			if(i > 1) {
				if(temperaturaAnterior < temperaturas[i-2]) 
					if(temperaturaAnterior < temperaturas[i]) 
						numValles++;
				if(temperaturaAnterior > temperaturas[i-2])
					if(temperaturaAnterior > temperaturas[i])
						numPicos++;
			}
			temperaturaAnterior = temperaturas[i];
		}
		printf("%d %d\n", numPicos, numValles);
	}
	return 0;
}
