#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int numCasos, i;
	char palabra[40];
	scanf("%d", &numCasos);
	for(; numCasos > 0; numCasos--) {
		scanf("%s", palabra);
		for(i = strlen(palabra) - 1; i > -1; i--) {
			if(i == strlen(palabra) - 1) {
				if(palabra[0] == toupper(palabra[0])) {
					printf("%c", toupper(palabra[i]));
				} else {
					printf("%c", palabra[i]);
				}
			} else {
				printf("%c", tolower(palabra[i]));
			}
		}
		printf("\n");
	}
	return 0;
}
