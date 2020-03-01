#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    system("cls");

        char nome[5][5];
        int i, j;
        char n;

        for (i = 0; i < 4; i++) {
            printf("Digite o nome: ");
            scanf("%s", &nome[i]);
        }

        /*
            i = 0
            j = 
            nome[i] = 
            nome[j] = 
            n = 
            troca = 
        */

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

        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                printf("array[%d][%d]: %s\n", i, j, nome[i]);
            }           
        }

    return (0);
}
