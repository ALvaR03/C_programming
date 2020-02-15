#include <stdio.h>
#include <stdlib.h>

int main() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* o limite minimo de temperatura na tabela*/
	upper = 300; /* Maximo limite */
	step = 20; /* saltos */

	fahr = lower;
	while(fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d \t %d \n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
