#include <stdio.h>
#include <stdlib.h>

	/* Criar um algoritmo que armazena 8 elementos
	 * dentro do vetor e exibir a soma total e media
	 * dos elementos.
	 */

int main(void) {

	system("clear");
	//Declaracao de variaveis
	int num[7], i;
	float soma, media;

	//Estrutura de repeticao 
	for (i = 0; i <= 7; i++) {
		//Exibir para o usuario o que digitar
		printf("Informe o numero:");
		scanf("%d", &num[i]);
		
		//Atribuir o valor para var soma
		soma += num[i];
	}
	//Tirando a media
	media = soma/8;

	//Exibir o resultado
	printf("A soma dos valores e: %2.f \n", soma);
	printf("A media foi: %2.f \n", media);

	return 0;
}
