/* Saltos de trampolín */
#include <stdio.h>
#include <stdlib.h>

void swap(double *xp, double *yp) {
    	double temp = *xp;
    	*xp = *yp;
    	*yp = temp;
}

void bubbleSort(double arr[], int n) {
	int i, j;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-i-1; j++)
           		if(arr[j] > arr[j+1])
              			swap(&arr[j], &arr[j+1]);
}
int main() {
    double p[7], sum;
    int i;
    while(1) {
        for(i = 0; i < 7; i++)
            if(scanf("%lf", &p[i]) == EOF)
                return 0;
        bubbleSort(p, 7);
        sum = 0;
        for(i = 2; i < 5; i++) {
            sum = sum + p[i];
        }
        printf("%d\n", (int)(sum*2));
    }
}