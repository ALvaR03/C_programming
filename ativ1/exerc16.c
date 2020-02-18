#include <stdio.h>
#include <stdlib.h>

	/* Crie um algoritmo que contenha um vetor de 
	 * 6 posicoes o peso de 6 atletas de sumo o algoritmo
	 * devera calcular tambem a total dos pesos e exibir 
	 * o rusultado.
	 */

int main(void) {
	system("clear");

	float peso[5], soma = 0;
	int i;

	for (i = 0; i < 5; i++) {
	system("clear");
		printf("Digite o %i peso do atleta: ", i + 1);
		scanf("%f", &peso[i]);

		soma += peso[i];
	}

	printf("A soma total dos atletas foi: %.2f \n \n", soma);

	return 0;
}
