#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Endereco {
	char bairro[10];
	char rua[10];
	char casa[10];
} Endereco;

typedef struct Contato {
	char telefone[10];
	char email[10];
} Contato;

typedef struct Funcionario {
	char nome[10];
	int mat;

	Endereco end;
	Contato cont;
} Funcionario;

int main() {

	Funcionario a;

	void limpar_buffer(void);


	printf("Digite nome: ");
	fgets(a.nome, 10, stdin);
	
	printf("Digite matricula: ");
	scanf("%i", &a.mat);

	printf("Digite bairro: ");
	limpar_buffer();
	fgets(a.end.bairro, 10, stdin);

	printf("\n");
	printf("%s", a.nome);
	printf("%i\n", a.mat);
	printf("%s", a.end.bairro);

	puts("Obrigado");

	return 0;
}

void limpar_buffer(void) {
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}
