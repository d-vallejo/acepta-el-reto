/* Los problemas de ser rico */
#include <stdio.h>

int main() {
	int numCasos, numAcuarios, num, sub, suma;
	scanf("%d", &numCasos);
	for(; numCasos > 0; numCasos--) {
		scanf("%d %d %d", &numAcuarios, &num, &sub);
		suma = num;
		for(; numAcuarios > 1; numAcuarios--) {
			num = num - sub;
			suma = suma + num;
		}
		printf("%d\n", suma);
	}
	return 0;
}
