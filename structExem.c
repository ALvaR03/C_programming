#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("clear");

	struct ficha_aluno {
		char nome[40];
		int numero;
		float nota;
	};

	struct ficha_aluno aluno;

	printf("\n----- Cadastro do aluno ------\n\n");
	printf("Nome:  ");
	fgets(aluno.nome, 40, stdin);

	printf("Numero do aluno: ");
	scanf("%d", &aluno.numero);

	printf("Informe a nota do aluno: ");
	scanf("%f", &aluno.nota);

	printf("\n------ Exibindo os dados -------\n\n");
	printf("Nome: %s", aluno.nome);
	printf("Numero: %d\n", aluno.numero);
	printf("Nota: %.2f\n", aluno.nota);


	return 0;
}
