#include <stdio.h>
#include <stdlib.h>

	/* Faca um programa em que o usuario informa a hora que
	 * inicia o seu turno de trabalho e e exibido na tela se
	 * e manha, tarde e noite. Considere.
	 * 		> Manha = 5hs as 13hs
	 * 		> Tarde = 13hs as 21hs
	 * 		> Noite = 21 as 5hs
	 * */

int main(void) {
	system("clear");
	
	int horario;	

	printf("Informe o horario do seu turno:");
	scanf("%d", &horario);

	if (horario >= 5 && horario <= 13) {
		printf("\nManha!!\n");
	} else if (horario > 13 && horario <= 21) {
		printf("\nTarde!!\n");
	} else if (horario > 21) {
		printf("\nNoite!!\n");
	} else {
		printf("\nHorario Errado!!\n");
	}

	return 0;
}
