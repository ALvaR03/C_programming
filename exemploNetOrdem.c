#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	system("clear");

	char nm[6][20], aux[20];
	int i, j;

	for (i = 0; i < 6; i++) {
	   printf("Nome %i: ", i+1);
	   scanf("%s", nm[i]);
	}


	for (i = 1; i < 6; i++) { /* 3 = qtde de palavras */
	   for (j = 1; j < 6; j++) {
		 // verifica se tem que ser depois, se for troca de posição
		 if (strcmp(nm[j - 1], nm[j]) > 0) {
		    strcpy(aux, nm[j - 1]);
		    strcpy(nm[j - 1], nm[j]);
		    strcpy(nm[j], aux);
		 }
	   }
	}

	// só mostrar a matriz
	for (i = 0; i < 6; i++)
	   printf("\n%s\n", nm[i]);

	return 0;
}
