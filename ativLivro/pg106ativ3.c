#include <stdio.h>
#include <stdlib.h>

	/* Elabore um programa que calcule a multa paga por um 
	 * pescador que ultrapassar a quantidade de quilos estabelecida
	 * por lei. A saber: 
	 *		# A quantidade de peixe por pessoa e 50kg.
	 *		# A multa por quilo excedente e R$ 4.00.
	 * */

int main(void) {
	system("clear");

	float multa, quilos;

	printf("Coloque a quantidade de quilos de peixe: ");
	scanf("%f", &quilos);

	if (quilos > 50) {
		multa = quilos - 50;
		multa *= 4;
		printf("\nMulta!!!\n");
	} else {
		printf("\nNao ha multa\n");
	}

	return 0;
}
