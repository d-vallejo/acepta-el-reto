/* Los calcetines de Ian Malcolm */
#include <stdio.h>

int main() {
	int numEtapas, etapas[100], sum, i;
	while(1) {
		scanf("%d", &numEtapas);
		if(numEtapas == 0) break;
		for(i = 0, sum = 0; i < numEtapas; i++) {
			scanf("%d", &etapas[i]);
			sum = sum + etapas[i];
		}
		printf("%d", sum);
		for(i = 0; i < numEtapas - 1; i++) {
			sum = sum - etapas[i];
			printf(" %d", sum);
		}
		printf("\n");
	}
	return 0;
}
