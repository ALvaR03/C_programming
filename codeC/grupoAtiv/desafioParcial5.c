#include <stdio.h>
#include <stdlib.h>

    /* Fazer um algoritmo criando duas matrizes uma matriz 
    x 3x3 e uma matriz y 3x3 para receber os valores da matriz
    x e somar pelos valores da propria matriz x. Ao final exiba 
    os valores da matriz y
    */

int main(void) {
    system("cls");

    int i, j, soma = 0;
    int x[3][3], y[3][3];

    for (i = 0; i < 3; i++) {
        for (i = 0; i < 3; i++) {
            printf("Digite um valor: ");
            scanf("%d", &x[i][j]);
            y[i][j] = x[i][j] + x[i][j];
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (i = 0; i < 3; i++) {
            printf("\nValor: %d", y[i][j]);
        }
    }

    return 0;
}