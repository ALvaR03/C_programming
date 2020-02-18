#include <stdio.h>
#include <stdlib.h>

	/* Ler 8 numeros reais em um array e depois 
	 * exibir os numeros localizados nas posicoes impares
	 */

int main(void) {
	system("clear");

	//variaveis
	float nums[7], posi[7];

	//Inserir os numeros para o processo
	for (int i = 0; i <= 7; i++) {
		printf("Digite valor da posicao %d: ", i+1);
		scanf("%f", &nums[i]);
		system("clear");
	}

	int j = 0;
	//Verificar a posicao do array;
	printf("Os valores das posicoes impares sao: \n\n");
	for (int i = 0; i <= 7; i++) {
		if (i % 2 != 0) {
			posi[j] = nums[i];
			printf("%.2f \n\n", posi[j]);
		}
	}


	return 0;
	//obs: Nao e para estranhar se valor 1 nao exibir 
	//e porque a contagem comeca do 0
}
