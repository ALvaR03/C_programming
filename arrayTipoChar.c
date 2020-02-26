#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h> //Para incluir o tipo bool
#include <ctype.h> // Para o tolower

//bool porque ela pode achar a letra ou nao
bool Encontra(char vet[], char letra){ 

	// strlen pra tamanho dinamico do vetor
	for (int i = 0; i < strlen(vet); i++) { 
		
		/*tolower para transfomar as letras 
		 * maiusculas em minusculas */

		if (tolower(vet[i]) == tolower(letra))
			return true;
	}

	return false;

}

int main(){
	
	char palavra[] = "Helicoptero";

	if (Encontra(palavra, 'h')) {
		printf("\n\n Letra encontrada!\n\n");
	} else {
		printf("\n\n Letra nao encontrada!\n\n");
	}

	return 0;
}
