#include <stdio.h>
#include <stdlib.h>
#include <string.h>

		/* A biblioteca string.h */

int main(void) {
	system("clear");

	char nome1[15];
	char nome2[15];

	printf("Digite um nome: ");
	scanf("%s", nome1);

	printf("O nome e: %s \n", nome1);

	strncpy(nome2, nome1, 3);

	/* strncpy(string_origem, "string_distino", numero de cacteres)
	Ex: strncpy(nome2, nome1, 5)*/

	/* strcpy(string_origem, "string_distino")*/

	printf("O nome2 e: %s \n\n", nome2);


	/* Concatenar string com a funcao strcat() */
	char frase[15] = "Nao ";
	char frase2[20] = "tem como";

	//	strcat(frase, "tem como");
		strncat(frase, frase2, 5);//Limita ate 3 caracteres

	//	printf("A frase e: %s\n", frase);
		printf("A frase e: %s\n", frase);
		//Sera exibido a frase completa "nao tem como"
	
	/* Exemplo de Strings em C!
	char palavra[7] = {"Brasil"};
	char palavra[] = {"Brasil"};
	char palavra[] = "Brasil";

	printf("%s \n", palavra);
	*/

	return 0;
}
