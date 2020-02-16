#include <stdio.h>
#include <stdlib.h>

	/* Ler dois arrays de numeros inteiros, cada um com  
	 * 7 posicoes. Crie um terceiro array onde cada 
	 * valor e a soma dos valores contidos nas posicoes 
	 * respectivas dos arrays originais. Exiba depois os 
	 * tres arrays.  */

int main(void) {
	system("clear");

	int i;
	int a[6], b[6], c[6];

	//Inserir os dados
	for (i = 0; i <= 6; i++) {
		printf("Coloque o %d numero do primeiro array: ", i+1);
		scanf("%d", &a[i]);
	}

	printf("\n\n");

		//Inserir os dados
		for (i = 0; i <= 6; i++) {
			printf("Coloque o %d numero do segundo array: ", i+1);
			scanf("%d", &b[i]);
		}

		printf("\n\n");

			//processar os dados no array
			for (i = 0; i <= 6; i++) {
				c[i] = a[i] + b[i];
			}

			i = 0;
			do {
				printf("c[%d] = %d \n", i, c[i]);
			i++;
			} while (i <= 6);
				//exibir na tela o resultado
			//	for (i = 0; i <= 6; i++) {
			//	}
	return 0;


/*	=======================
	int a[6], b[6], c[6], j = 0;	

	int i = 0;
	while(i <= 6) {
		printf("Digite o %d numero do primeiro array: ", i+1);
		scanf("%d", &a[i]);
		i += 1;	
	}

	printf("\n\n");

		i = 0;
		while(i <= 6) {
			printf("Digite o %d numero do segundo array: ", i+1);
			scanf("%d", &b[i]);
			i += 1;	
		}

		printf("\n\n");

			i = 0;
			printf("O resultados dos arrays em e:\n");
			for (j = 0; j <= 6; j++) {
				c[i] = a[i] + b[i];
				printf("c[%d] = %d \n\n", j, c[i]);
			}
*/
}
