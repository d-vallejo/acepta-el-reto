/* La pieza perdida */
#include <string.h>
#include <stdio.h>

int main() {
    int n, num, res, i;
	while(1){
		scanf("%d", &n);
		if (n == 0)
            return 0;
		int puzzle[10000];
		for(i = 1; i < n; i++){
			scanf("%d", &num);
			puzzle[num-1] = 1;
		}
		res = 0;
		for(i = 1; i < n+1; i++){
			if(puzzle[i-1] == 0)
                res = i;
            puzzle[i-1] = 0;
		}
		printf("%d\n", res);
	}
}