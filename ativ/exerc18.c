#include <stdio.h>
#include <stdlib.h>

	/* Crie um algoritmo que leia um array de
	 * 7 posicoes e exiba somente os valores pares.
	 */

int main(void) {
	system("clear");

	//variaveis
	int nums[6], maiores[6], i, j = 0;

	//Inserir os numeros para exibir os valores pares  
	for (i = 0; i <= 6; i++) {
		printf("Digite o valor numero %d: ", i+1);
		scanf("%d", &nums[i]);
		system("clear");
	}

	//Verificar valores pares;
	for (i = 0; i <= 6; i++) {
		if (nums[i] % 2 == 0) {
			maiores[j] = nums[i];
		printf("Os valores pares foram: %d \n\n", maiores[j]);
		}
	}

	return 0;
}
