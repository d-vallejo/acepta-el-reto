/* Cuadrados con cerillas */
#include <stdio.h>

int main() {

        int numCasos, h, v;

        scanf("%d", &numCasos);
        while(numCasos--) {
                scanf("%d %d", &h, &v);
		printf("%d\n", v * (h + 1) + h * (v + 1));
        }
        return 0;
}
