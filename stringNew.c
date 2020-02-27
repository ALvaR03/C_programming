#include <stdio.h>
#include <stdlib.h>
#include <string.h>

		/* A biblioteca string.h */

int main(void) {
	system("clear");

	char nome[15];

	/* strcpy(string_origem, "string_distino")*/
	strcpy(nome, "Bruce Wane");

	printf("Nome: %s \n", nome);


	
	/*
	char palavra[7] = {"Brasil"};
	char palavra[] = {"Brasil"};
	char palavra[] = "Brasil";

	printf("%s \n", palavra);
	*/

	return 0;
}
