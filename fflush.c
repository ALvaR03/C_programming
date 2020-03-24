#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    char letra1, letra2;

    printf("Insira um caractere: ");
    scanf("%c",&letra1);

    printf("Insira outro caractere: ");
    scanf(" %c",&letra2);

    printf("Voce digitou: '%c' e '%c'", letra1, letra2);
}