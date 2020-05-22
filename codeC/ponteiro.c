#include <stdio.h>
#include <stdlib.h>

int concat(char *na, int num_elementos);

int main(void) {
	system("clear");

	char nome[7] = {'a', 'l', 'v'};
	
	printf("Nome Conpleto: %d\n", concat(nome, 7));

	return 0;
}

int concat(char *na, int num_elementos) {

	char total = 0;
	char k; 

	for ( k = 0; k < num_elementos; k++ ) {
		total += na[k];
	}

	return total;

}
