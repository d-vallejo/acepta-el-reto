#include <stdio.h>

void swap(long *xp, long *yp) {
    	long temp = *xp;
    	*xp = *yp;
    	*yp = temp;
}

void bubbleSort(long arr[3], int n) {
	int i, j;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-i-1; j++)
           		if(arr[j] > arr[j+1])
              			swap(&arr[j], &arr[j+1]);
}

int main() {
	int numCasos, i;
	long numeros[3];
	scanf("%d", &numCasos);
	for(; numCasos > 0; numCasos--) {
		scanf("%ld %ld %ld", &numeros[0], &numeros[1], &numeros[2]);
		bubbleSort(numeros, 3);
		for(i = 0; i < 3; i++) {
			if(i == 2) {
				printf("%ld\n", numeros[i]);
			} else {
				printf("%ld ", numeros[i]);
			}
		}
	}
	return 0;
}
