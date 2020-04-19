#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <string.h>

int main(void) {
system("cls");
	char texto[100];
	int tam1, tam2;

	printf("Digite o texto: ");
	gets(texto);


	printf("A quantidade de letra do texto e: %d", strlen(texto));

	system("exit");
/*
	do
	{
		printf("Hello World!!");
		printf("\nDeseja continuar? (S/N)");
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		fflush(stdin);
	} while (resposta != 'N');
*/



	//printf("Hello World!! \n %%");
	return 0;
}
