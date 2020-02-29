#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Adiciona funcoes especiais com o strcpy

	/* Escreva um algoritmo que leia 10 nomes e exiba
	 * na tela os nomes em ordem alfabetica */

int main(){
	system("cls");

	char nome[5][15];
	int i, j;
	char n;

	/* Entrada de dados */

	for (i = 0; i < 4; i++) {
		printf("Escreva um nome: ");
		scanf("%s", &nome[i]);
	}
		/* Ordenacao */

/*
		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 4; j++) {

				if (nome[i] > nome[j]) {
					n = nome[i];
					nome[i] = nome[j];
					nome[j] = n;
				}
			}
		}
*/

		/* Saida de dados */

		for (i = 0; i < 4; i++) {
			printf("%s\n", nome[i]);
		}

	return 0;
}
