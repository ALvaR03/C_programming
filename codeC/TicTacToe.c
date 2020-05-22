#include <stdio.h>
#include <stdlib.h>

#define MAXINDEX 10

//Funcoes
void showBoard(char arr[10]);//Mostra o tabuleiro
void limpaTela();//Apenas para limpar a tela

int main() {
	limpaTela();

	char board[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	showBoard(board);


	return 0;
}

void limpaTela() {
	system("@cls || clear");
}

void showBoard(char arr[10]) {
	printf("\n\t\t Jogo da Velha \n\n");
	printf("\t| Jogador 1(X) | CPU 2(O) | \n\n");

	int idx = 1;
	while(idx < MAXINDEX) {
		printf("\t\t  %c  |  %c  |  %c  \n", arr[idx], arr[idx+1], arr[idx+2]);
		printf("\t\t    |    |    \n");

		if(idx <= 4) {
            printf("\t\t____|____|____\n");
		}
		idx += 3;
	}
	printf("\t\t    |    |    \n");
	return;
}
