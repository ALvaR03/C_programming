#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("cls");

    int mat[3][3];
    int l, c;

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("Digite o valor da Matriz[%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }//fim da linha 
    
    printf("\n");

    printf("Matriz preenchida com sucesso!!\n");

    printf("\n");

    system("pause");
    system("cls");

    system("Imprimindo Matriz");
    printf("\n");
    printf("\n");

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%i", mat[l][c]);
            printf("\t");
        }
    printf("\n");
    }//fim da linha 

    printf("\n");

    return 0;
}