#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    system("cls");

        char nome[5][15];
        int i, j;
        char n;

        for (i = 0; i < 4; i++) {
            gets(nome[i]);
        }

        /*Ordenacao*/

        for (i = 0; i < 4; i++) {
            for (j = i + 1; j < 5; j++) {
                if (nome[i] > nome[j]) {
                    n = nome[i];
                    nome[i] = nome[j];
                    nome[j] = n;
                }
            }
        }

        for (i = 0; i < 4; i++) {
            printf("%s\n", nome[i]);
        }

    return 0;
}
