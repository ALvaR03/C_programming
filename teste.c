#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	system("clear");

	/*
	char c; 

	do {
		printf("\nHello, World");
		printf("\nDeseja continuar(S/N)");
		scanf("%c", &c);
		c = toupper(c);
		fflush(stdin);
	} while (c != 'N'); */

    int contador, num;
	char r;
    
	do {
		printf("Numero para a tabuada: ");
		scanf("%d", &num);
		fflush(stdin);
		contador = 0;
		while(contador <= 10) {
			printf("%i X %i = %i\n", contador, num, contador * num);
			contador += 1;
		}
		printf("\nDeseja continuar?(S/N)");
		//getc(resposta);
		scanf("%c", &r);
		r = toupper(r);
		fflush(stdin);
	} while (r != 'N');

    return 0;
} 
