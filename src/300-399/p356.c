/* Dólar Zimbabuense */
#include <stdio.h>

void swap(long long *xp, long long *yp) {
    	long long temp = *xp;
    	*xp = *yp;
    	*yp = temp;
}

void bubbleSort(long long arr[3], int n) {
	int i, j;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-i-1; j++)
           		if(arr[j] > arr[j+1])
              			swap(&arr[j], &arr[j+1]);
}

int main() {
	int numCasos, i;
	long long numeros[3];
	scanf("%d", &numCasos);
	for(; numCasos > 0; numCasos--) {
		scanf("%lld %lld %lld", &numeros[0], &numeros[1], &numeros[2]);
		bubbleSort(numeros, 3);
		for(i = 0; i < 3; i++) {
			if(i == 2) {
				printf("%lld\n", numeros[i]);
			} else {
				printf("%lld ", numeros[i]);
			}
		}
	}
	return 0;
}