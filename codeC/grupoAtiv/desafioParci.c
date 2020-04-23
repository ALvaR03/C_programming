#include <stdio.h>
#include <stdlib.h>

int main() {
	system("clear");

	int x[10], i;
	
	for (i = 0; i <= 9; i++) {
		printf("Digite somente o numero 30: ");
		scanf("%d", &x[i]);
		if (x[i] != 30) {
			printf("Erro!\n");
			break;
		}
	}
	return 0;	
} 
