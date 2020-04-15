#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXIDEX 10

void printBoard(char arr[10]);

// Limpa a tela a atualizacao da posicao escolhida
void clrscr();

// Muda a funcao para chamar a funcao abaixo
bool checkWinner(char arr[10], char letter, int numberSquare);

// Verificar todas as posibilidade de ganhar
bool checkOne(char arr[10], char letter);
bool checkTwo(char arr[10], char letter);
bool checkThree(char arr[10], char letter);
bool checkFour(char arr[10], char letter);
bool checkFive(char arr[10], char letter);
bool checkSix(char arr[10], char letter);
bool checkSeven(char arr[10], char letter);
bool checkEight(char arr[10], char letter);
bool checkNine(char arr[10], char letter);

// Verificar se o lado inserido e velido 
int placesLeft(char arr[10]);

// Verifica se o valor da coluna e valida
int playerPick(char arr[10], char playerChar);

// Logica principal do jogo que chama uma funcao que verifica a logica
char mainGame();

// Verifica se o movimento e valido
bool checkMove(char arr[10], int num);

// Verifica a entrada se e de um ate nove
bool checkEntry(int input);

        /*= = = Inicio do programa = = = */
int main(void) {
    int printResult;

    char gameResult = mainGame();


    return (0);
}


char mainGame() {
    char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool placeLeft = true;
    char playerChar = 'X';
    int indexChange;
    printBoard(board);

    //continuar o jogo ao memos que o jogado tem a tripla sequencia ou se der velha 
    while(placeLeft) {
        indexChange = playerPick(board, playerChar);
        board[indexChange] = playerChar;
    }

}