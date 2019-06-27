/* Tensión descompensada */
#include <stdio.h>

int main() {
	int numCasos, maxima, minima;
	scanf("%d", &numCasos);
	for(; numCasos > 0; numCasos--) {
		scanf("%d / %d", &maxima, &minima);
		if(maxima < minima) {
			printf("MAL\n");
		} else {
			printf("BIEN\n");
		}
	}
	return 0;
}
