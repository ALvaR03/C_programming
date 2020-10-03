#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Aluno {
    char nome[10];
    char cpf[16];
    int matricula;
    float media;
} Aluno;

void cadAluno();
void limpa();

Aluno aluno[2];
int main() {
    limpa();

    int var, quant;

    cadAluno();
    //Saida de dados
    printf("Quer printar quantas veses: ");
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        printf("Nome: %s -- CPF: %s -- Matricula: %i - Media: %.2f\n",
        aluno.nome, aluno.cpf, aluno.matricula, aluno.media);
    }

    var = 0;
    do {
        printf("Olha o som: \n");
        var++;
    } while (var < 2);

    //fim da main
    return 0;
}

void limpa() {
    system("@cls || clear");
}

void cadAluno() {
    
    //Entrada de dados
    printf("\t++ Cadastro de alunos ++\n");
    printf("Nome: ");
    setbuf(stdin, NULL);
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    printf("CPF: ");
    setbuf(stdin, NULL);
    fgets(aluno.cpf, sizeof(aluno.cpf), stdin);
    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Media: ");
    scanf("%f", &aluno.media);

}
