#include <stdio.h>
#include <stdlib.h>

	/* Criar um algoritmo que armazena 8 elementos 
	 * do vetor, calcule e exiba soma dos valores positivos
	 * e tambem exiba a quantidade de elementos negatvos.
	 */

int main(void) {
	system("clear");

	int valores[7], soma = 0, i, neg = 0;
	
	for (i = 0; i <= 7; i++) {
		printf("Informe o valor: ");
		scanf("%d", &valores[i]);

		if (valores[i] >= 0) {
			soma += valores[i];
		} /*else {
			neg 
		}*/
	}
	
		printf("A soma dos valores positivos foi: %d \n", soma);

	return 0;
}
