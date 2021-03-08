#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) 
{
    int s = a + b;
    return s; 
}

int sub(int a, int b) 
{
    int s = a - b;
    return 0;
}

int main(void) 
{
    int n1, n2, op, res;

    int fim = 0;

    while(fim == 0) {

        printf("Digite um valor: ");
        scanf("%d", &n1);

        printf("Digite um valor: ");
        scanf("%d", &n2);

        printf("Escolha a operacao:\n1 - Adicao\n2 - Subtracao");
        scanf("%d", &op);
        if (op == 1) {
            res = soma(n1, n2);
        }
        if (op == 2) {
            res = sub(n1, n2);
        }

        printf("\nO resultado e: %d", res);

        printf("\n\n0 - Continuar \n1- Parar\n");
        scanf("%d", &fim);
        system("clear");

    }

    return 0;
}
