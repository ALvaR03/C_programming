#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*   O objetivo e cadastrar estudantes 
*   de uma escola
*/

// Estudante estrutura definicao
typedef struct {
    char nome[50];
    int matricula;
    int idade;
}aluno;

// Estrutura com poteiro como paranmetro
void mostraDadosEstudantes(aluno *st) {
    printf("\n -- Estudante --\n");
    printf("Nome: %s\n", st->nome);
    printf("Matricula: %d\n", st->matricula);
    printf("Idade: %d\n", st->idade);
}

int main() {
    // Criacao do estudante
    aluno st1;
    aluno st2;
    
    // Colocando os dados
    strcpy(st1.nome, "Deyde Costa");
    st1.matricula = 157;
    st1.idade = 21;
    
    // Colocando os dados
    strcpy(st2.nome, "Paula Tejano");
    st2.matricula = 158;
    st2.idade = 15;
    
    // Chamando a funcao e mostrando os dados
    mostraDadosEstudantes(&st1);
    
    // Chamando a funcao e mostrando os dados
    mostraDadosEstudantes(&st2);
    
    return 0;
}