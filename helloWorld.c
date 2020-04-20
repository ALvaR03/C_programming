#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	system("@cls || clear");

	FILE *fPointer;
	fPointer = fopen("bacon.txt", "w");

	fprintf(fPointer, "Eu gosto de bacon");

	fclose(fPointer);

	/*
	FILE *fptr;
	int c, stock;
	char buffer[200], item[10];
	float price;

	fptr = fopen("meuArquivo.txt", "w");

	fgets(buffer, 20, fptr);
	printf("%s\n", buffer);

	fscanf(fptr, "%d%s%f", &stock, item, &price);
	printf("%d %s %4.2f\n", stock, item, price);

	while ((c = getc(fptr)) != EOF) 
		printf("%c", c);

	fclose(fptr);

	if (fptr == NULL) {
		printf("Erro em abrir o arquivo");
		return -1;
	}

	fclose(fptr);
	*/
	
	return 0;
}
//printf("Hello World!! \n %%"); ** Este aquirvo e para testar codigos em C
