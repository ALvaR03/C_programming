#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("cls");

    int array[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Entre com o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("array[%d][%d]: %d\n", i, j, array[i][j]);
        }
    }

    return 0;
    system("pause");
}