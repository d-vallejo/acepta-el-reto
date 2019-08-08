/* Las calorías */
#include <stdio.h>

int main() {

	long numCalorias, comidas, comida, suma, entrenamientos;

	while(1) {
		scanf("%ld", &numCalorias);
		if(!numCalorias)
			break;
		suma = 0;
		scanf("%ld", &comidas);
		for( ; comidas > 0; comidas--) {
			scanf("%ld", &comida);
			suma = suma + comida;
		}
		entrenamientos = suma / numCalorias;
		if(suma % numCalorias)
			entrenamientos++;
		printf("%ld\n", entrenamientos);
	}
	return 0;
}
