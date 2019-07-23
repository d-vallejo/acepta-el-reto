/* ¿Podemos empezar? */
#include <stdio.h>
#include <string.h>

int main() {
	int ps, ls, a, asistentes[30*26], p, sum, i, min;
	char l;
	while(1) {
		scanf("%d %d %d", &ps, &ls, &a);
		if(ps == 0 && ls == 0 && a == 0) break;
		sum = 0;
		memset(asistentes, 0, sizeof(asistentes));
		if(ps*ls % 2) {
			min = ps*ls/2+1;
		} else {
			min = ps*ls/2;
		}
		while(a--) {
			scanf("%d %c", &p, &l);
			if(asistentes[(p-1)*ls+l-65] == 0) asistentes[(p-1)*ls+l-65] = 1;
		}
		for(i = 0; i < ps*ls; i++) {
			sum = sum + asistentes[i];
		}
		if(sum >= min) {
             		printf("EMPEZAMOS\n");
		} else {
			printf("ESPERAMOS\n");
		}
	}
	return 0;
}
