#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n[9], i;

	system("clear");
	//para percorrer o vetor
	for (i = 0; i <= 9; i++) {
		//Mostrar para o usuario digitar
		printf("Digite o numero:");
		scanf("%d", &n[i]);
	}

		//Separar na visualizacao
		printf("===============\n");
	
	//Exibir os numeros multiplos de cinco
	for (i = 0; i <= 9; i++) {
		if (n[i] % 5 == 0) {
			printf("Multiplo de 5: %d", n[i]);
			printf("\n");
		}
	}

	return 0;
}
