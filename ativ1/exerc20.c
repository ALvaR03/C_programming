#include <stdio.h>
#include <stdlib.h>

	/* Ler dois arrays de numeros inteiros, cada um com  
	 * 7 posicoes. Crie um terceiro array onde cada 
	 * valor e a soma dos valores contidos nas posicoes 
	 * respectivas dos arrays originais. Exiba depois os 
	 * tres arrays.  */

int main(void) {
	system("clear");

	int a[6], b[6], c[7], i;

	//Inserir os dados
	for (i = 0; i <= 6; i++) {
		printf("Coloque o %d numero do primeiro array: ", i+1);
		scanf("%d", &a[i]);
		printf("Coloque o %d numero do segundo array: ", i+1);
		scanf("%d", &b[i]);

		c[i] = a[i] + b[i];
	}

		printf("\n\n");

			i = 0;
			do {
				printf("c[%d] = %d \n", i, c[i]);
			i++;
			} while (i < 7);
	return 0;

}
