#include <stdio.h>
#include <stdlib.h>

int main(void){

	int b[10], nump[10], i;

	for (i = 0; i <= 9; i++) {
		printf("Digite o numero:");
		scanf("%d", &b[i]);
		if (b[i] % 2 == 0) {
			nump[i] = 0;
		} else {
			nump[i] = 1;
		}
	}
	
	for (i = 0; i < 10; i++) {
		printf("numeros: %d\n", nump[i]);
	}

	return 0;
}
