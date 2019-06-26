#include <stdio.h>

int main() {
	char caracter;
	int numN, numG;
	while(1) {
		numN = 0, numG = 0;
		scanf("%c", &caracter);
		if(caracter == '.') break;
		if(caracter == 'N' || caracter == 'G') {
			while(1) {
				if(caracter == 'N') {
					numN++;
				} else if(caracter == 'G') {
					numG++;
				} else if(caracter == '.') break;
				scanf("%c", &caracter);
			}
			(numN % 2) ? (numG % 2) ? printf("PAREJA MIXTA\n") : printf("NEGRO SOLITARIO\n") : (numG % 2) ? printf("GRIS SOLITARIO\n") : printf("EMPAREJADOS\n");
		}
	}
	return 0;
}
