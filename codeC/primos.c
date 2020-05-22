#include <stdio.h>
#include <stdlib.h>

int main(void){
	system("@cls || clear");

	int n, k, primo;

	for (n = 1; n <= 10; n++) {
		primo = 0;
		for (k = 1; k <= n; k++) {
			if ((n % k) == 0 ) {
				primo++;
			}
		}

		if (primo == 2) {
			printf("O %d e numero primo!!\n", n);
		} else {
			printf("Esse %d nao e primo!!\n", n);
		}
	}

	return 0;
}
