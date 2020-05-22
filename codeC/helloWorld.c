#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	system("@cls || clear");

	int num1, num2, total;
	char operador;

	printf("Digite o Primeiro e Segundo Numero: \n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	__fpurge(stdin);
	printf("Qual Operador(+, -, *, /):\n");
	scanf("%c", &operador);

	switch(operador) {
		case '+':
			total = num1 + num2;
			printf("\nResultado da soma e %d", total);
			break;

		case '-': 
			total = num1 + num2;
			printf("\nResultado da subtracao e %d", total);
			break;
		case '*':
			total = num1 * num2;
			printf("\nResultado da multiplicacao e %d", total);
			break;
		case '/':
			if (num2 == 0 ) {
				printf("Erro na execucao!!\n");
				break;
			} else {
				total = num1 / num2;
				printf("\nResultado da multiplicacao e %d", total);
				break;
			}
		default:
			printf("Operador Invalido!!!");
			break;
	}
	return 0;
}

//printf("Hello World!! \n %%"); ** Este aquirvo e para testar codigos em C
