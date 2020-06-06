#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[10];
    char cpf[16];
    int matricula;
    float media;
    int idade;
    char telefone[10];
    char estCivil[10];
    int coeficiente;
} Aluno;

int main() {

    Aluno aluno;

    //Entrada de dados
    strcpy(aluno.nome, "paulo");
    strcpy(aluno.cpf, "123");
    aluno.matricula = 456;
    aluno.media = 6.75;

    //Saida de dados
    printf("Nome: %s -- CPF: %s -- Matricula: %i - Media: %.2f\n\n",
    aluno.nome, aluno.cpf, aluno.matricula, aluno.media);

    aluno.idade = 21;
    strcpy(aluno.telefone, "40028922");
    strcpy(aluno.estCivil, "Solteirao");
    aluno.coeficiente = 10;


    printf("Idade: %i -- Telefone: %s -- Estado Civil: %s -- Coeficiente: %i\n\n",
    aluno.idade, aluno.telefone, aluno.estCivil, aluno.coeficiente);

    //fim da main
    return 0;
}