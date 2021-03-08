#include <stdio.h>
#include <stdlib.h>

int v[4];
int v1[3];

int main(void) 
{
    v[0] = 45;
    v[1] = 21;
    v[2] = 25;
    v[3] = 55;

    for (int i = 0; i < 3; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("\nO valor de v1[%d] = %d\n", i, v1[i]);
    }

    return 0;
}
