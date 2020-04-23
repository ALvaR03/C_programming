#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    system("clear");

        char nome[5][10];
        int i, j;
        char n;

        for (i = 0; i <= 4; i++) {
            printf("Digite o nome: ");
		  fflush(stdin);
            gets(nome[i]);
        }


        /*Ordenacao

        for (i = 0; i < 4; i++) {
            for (j = i + 1; j < 5; j++) {
                if (nome[i] > nome[j]) {
                    n = nome[i];
                    nome[i] = nome[j];
                    nome[j] = n;
                }
            }
        }*/

        for (i = 0; i <= 4; i++) {
                printf("array: %s\n", nome[i]);
        }

    return 0;
}
