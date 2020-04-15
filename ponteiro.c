#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
	setlocale(LC_ALL, "");
	system("clear");

	void troca(int *num, int *num2);

	int x = 25;
	int y = 100;

	printf("X e %d, Y e %d \n", x, y);
	troca(&x, &y);
	printf("Agora X e %d, Y e %d \n", x, y);


	/* Exemplo 01
	int *x, valor, y;
	int a[5] = {22, 25, 40, 64, 33};
	int *prt = NULL, i;

	prt = a;
		for (i = 0; i < 5; i++) {
			printf("%d\n", *a);
		}

	valor = 35;
	x = &valor;
	y = *x;

	printf("Endereco da variavel comun valor: %p\n", &valor);
	printf("Lendo o coteudo do ponteiro x: %p\n", x);
	printf("Endereco da variavel ponteiro x: %p\n", &x);
	printf("Conteudo da variavel apontada por x: %d\n", *x);
	printf("Conteudo da variavel comun y: %d\n", y);
	*/

	return 0;
}

void troca(int *num, int *num2) {
	int temp;

	temp = *num;
	*num = *num2;
	*num2 = temp;
}

