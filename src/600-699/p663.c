#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);
    for(; n > 0; n--) {
        scanf("%d", &a);
	if(a > 0) {
		printf("%d\n", a-1);
	}
	else {
		printf("%d\n", a);
	}
    }
}
