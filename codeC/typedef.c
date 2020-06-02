#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[10];
    char cpf[16];
    int matricula;
    float media;
} Aluno;

int main() {

    Aluno aluno;

    //Entrada de dados
    strcpy(aluno.nome, "paulo");
    strcpy(aluno.cpf, "123");
    aluno.matricula = 456;
    aluno.media = 6.75;

    //Saida de dados
    printf("Nome: %s -- CPF: %s -- Matricula: %i - Media: %.2f",
    aluno.nome, aluno.cpf, aluno.matricula, aluno.media);

    //fim da main
    return 0;
}