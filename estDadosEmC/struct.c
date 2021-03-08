#include <stdio.h>
#include <stdlib.h>

typedef struct _Pessoa 
{
    int idade;
    float altura;

} Pessoa;

int main(void) 
{
    Pessoa p;

    p.idade = 5;
    p.altura = 1.65;

    printf("A altura da pessoa e: %d", p.idade);
    printf("A altura da pessoa e: %.2f", p.altura);

    return 0;
}
