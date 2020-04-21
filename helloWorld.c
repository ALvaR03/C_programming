#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool checkPalindromo(char *inputString);

int main(void) {
	system("@cls || clear");

	char palavra[80], palindromo[80], p;
	
	printf("Digite a palvra: ");
	gets(palavra);
	palindromo[p] = checkPalindromo(palavra);	
	
	return 0;
}

bool checkPalindromo(char *inputString) {
	char *q = inputString + strlen(inputString) - 1;

	printf("InputString: %s\n", inputString);
	while (q > inputString) {
		if(*q-- != *inputString++) {
			printf("Nao e palindromo\n");
			break;
		} else {
			printf("E palindromo!!!\n");
			break;
		}
	}
}

//printf("Hello World!! \n %%"); ** Este aquirvo e para testar codigos em C
