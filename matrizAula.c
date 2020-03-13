#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[2][2], b[2][2], c[2][2];
	int i, j;

	for (i = 0; i < 2; i++) {
		for (i = 0; i < 2; i++) {
			printf("\nDigite o numero da matriz a:");
			scanf("%d", &a[i][j]);
			printf("\nDigite o numero da matriz b:");
			scanf("%d", &b[i][j]);
		}
	}


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	printf("\nO produto das matrizes A e B: %d", c[i][j]);
	
	return 0;
}
