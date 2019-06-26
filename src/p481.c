#include <stdio.h>

void main() {
	int fila, columna;
	while(1) {
		scanf("%d %d", &fila, &columna);
		if(!fila && !columna) break;
		printf("%c%d\n", 105 - fila, columna);
	}
}
