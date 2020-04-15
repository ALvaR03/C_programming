#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("clear");
	
	int idade = 0;

	printf("Digite a idade do jodador: ");
	scanf("%d", &idade);

	if (idade >= 5 && idade <= 10) {
		printf("\nJogador Infantil!!\n");
	} else if (idade > 10 && idade <= 17) {
		printf("\nJogador Juvenil!!\n");
	} else {
		printf("\n Adulto\n");
	}

	return 0;
}
