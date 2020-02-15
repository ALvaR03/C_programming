#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char palavra[7] = {"Brasil"};
	char palavra[] = {"Brasil"};
	char palavra[] = "Brasil";

	printf("%s \n", palavra);

	return 0;
}
