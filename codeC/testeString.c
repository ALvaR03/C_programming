#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	system("@cls || clear");
	
	char linha[100]; 
	char caracter;
	int i = 0;

	do {
		printf("Deseja continuar?\n");
		caracter = getchar();
		linha[i] = caracter;
		++i;
	} while (caracter != '\n');

	//linha[i - 1] = '\0';

	printf("%s\n", linha);

	return 0;
}
