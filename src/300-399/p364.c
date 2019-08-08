/* Espionaje en Navidad */
#include <stdio.h>
#include <string.h>

int main() {
		
	char cadena[100], caracter;
	int i;

	while(1) {
		scanf("%s", cadena);
		if(!strcmp(cadena, "FIN"))
			break;
		for(i = 0; i < strlen(cadena); i++) {
			if(cadena[i] == 'Z') {
				printf("A");
			} else if(cadena[i] == '\n') {
				printf("\n");
			} else {
				printf("%c", cadena[i] + 1);
			}
		}
		scanf("%c", &caracter);
		if(caracter == '\n') {
			printf("\n");
		} else {
			printf(" ");
		}
	}
	return 0;
}	