#include <stdio.h>
#include <stdlib.h>

	/* Crie um algoritmo que leia um vetor de 10 posicoes e 
	 * que exiba somente os valores maiores que 30.
	 */

int main(void) {
	system("clear");

	//variaveis
	int nums[9], maiores[9], i, j = 0;

	//Inserir os numeros  
	for (i = 0; i <= 9; i++) {
		printf("Digite o valor numero %d: ", i+1);
		scanf("%d", &nums[i]);
		system("clear");
	}

	//Verificar volores maiores que 30;
	for (i = 0; i <= 9; i++) {
		if (nums[i] > maiores[j]) {
			maiores[j] = nums[i];
		printf("Os valores maiores que 30 foram: %d \n\n", maiores[j]);
		}
	}

	return 0;
}
