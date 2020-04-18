#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXINDEX 10

void printBoard(char arr[10]);

// Limpa a tela e mostra a tabela atualizada
void clrscr();

// Troca a funcao para mostra o resultado abaixo
bool checkWinner(char arr[10], char letter, int numberSquare);

// Verificando o ganhador para cada ocassiao
bool checkOne(char arr[10], char letter);
bool checkTwo(char arr[10], char letter);
bool checkThree(char arr[10], char letter);
bool checkFour(char arr[10], char letter);
bool checkFive(char arr[10], char letter);
bool checkSix(char arr[10], char letter);
bool checkSeven(char arr[10], char letter);
bool checkEight(char arr[10], char letter);
bool checkNine(char arr[10], char letter);

// Checa se as posicoes estao validas para jogar 
bool placesLeft(char arr[10]);

// Checa e seleciona um valor valido na coluna
int playerPick(char arr[10], char playerChar);

// Pricipal logica do jogo essa funcao
char mainGame();

// Verifica uma posicao valida da tabela 
bool checkMove(char arr[10], int num);

// Checa se o valor inserido vai de 1 a 9
bool checkEntry(int input);


int main(void) {
    clrscr();

    int printResult;
    char gameResult = mainGame();

    // Checa qual resultado que sera mostrado na tela 
    if (gameResult != 'D') {
        printResult = (gameResult == 'X') ? 1 : 2;
        printf("\nJogador %d ganhou!!", printResult);
    } else {
        printf("Deu Velha!!");
    }

    return 0;
}

void clrscr() { // Essa funcao so linha a tela
    system("@cls || clear");
}

// D = Empate, X = Jogador um ganhow, O = Jogador dois ganhow
char mainGame() {
    char board[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool placeLeft = true; 
    char playerChar = 'X';
    int indexChange;
    printBoard(board);

    // Continua ao nao ser que o Jogador ja tenha marcado as tres linhas
    while (placeLeft) {
        indexChange = playerPick(board, playerChar);
        board[indexChange] = playerChar;
        clrscr();
        printBoard(board);
        if (checkWinner(board, playerChar, indexChange)) {
            placeLeft = false;
        } else if (placesLeft(board) == false) {
            playerChar = 'D';
            placeLeft = false;
        } else { 
            playerChar = (playerChar == 'X') ? 'O' : 'X';
        }
    }
    return playerChar;
}

// Checa e captura o dado inserido
int playerPick(char arr[10], char letter) {
    int player;
    int choice; 
    bool validChoice = false;

    if (letter = 'X') {
        player = 1; 
    } else {
        player = 2; 
    }

    while (validChoice == false) {
        printf("Jogador %d selecione um numero: ", player);
        scanf("%d", &choice);
        if (checkEntry(choice) == false) {
            printf("Numero invalido, selecione um numero da tabela: ");
        } else {
            validChoice = checkMove(arr, choice);
                if (validChoice == false) {
                    printf("Movimento invalido");
                }
        }
    }
    return choice;
}

// Mostra o as att do arr no formato do #
void printBoard(char arr[10]) {

    // Titulo e Jogadores
    printf("\n \t\t Tic Tac Toe \n\n");
    printf("\t Jogador 1 (X) = Jogador 2 (O)\n\n\n");

    int index = 1;
    while (index < MAXINDEX) {
        // Linha do eixo y 
        printf("\t \t|\t \t|\n");
        // Linha do eixo y com conteudo
        printf("\t %c \t|\t %c \t|\t %c \n", arr[index], arr[index+1], arr[index+2]);
        // Linha do eixo y 
        printf("\t \t|\t \t|\n");

        // Para evitar linha extra e encurtar o codigo
        if (index <= 4) {
            // Linha do eixo X
            printf("________________|_______________|_______________\n");
        }
        index += 3;
    }
    return;
}

bool checkMove(char arr[10], int num) {
    bool legalMove = true;
    if (arr[num] == 'X' || arr[num] == 'O') {
        legalMove = false;
    }
    return legalMove;
}

bool checkEntry(int input) {
    bool validInput = false;
    int numArray[9] ={1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++) {
        if (numArray[i] == input) {
            validInput = true;
            break;
        }
    }
    return validInput;
}

bool placesLeft(char arr[10]) {
    bool placesLeft = false;
    for (int i = 1; i < MAXINDEX; i++) {
        if (arr[i] != 'X' && arr[i] != 'O') {
            placesLeft = true;
            break;
        }
    }
    return placesLeft;
} 

bool checkWinner(char arr[10], char letter, int numberSquare) {
    // winner boolean
    bool isWinner;
    // switch to check move is winner
    switch (numberSquare) {
    case 1:
        isWinner = checkOne(arr, letter);
        break;
    case 2:
        isWinner = checkTwo(arr, letter);
        break;
    case 3:
        isWinner = checkThree(arr, letter);
        break;
    case 4:
        isWinner = checkFour(arr, letter);
        break;
    case 5:
        isWinner = checkFive(arr, letter);
        break;
    case 6:
        isWinner = checkSix(arr, letter);
        break;
    case 7:
        isWinner = checkSeven(arr, letter);
        break;
    case 8:
        isWinner = checkEight(arr, letter);
        break;
    case 9:
        isWinner = checkNine(arr, letter);
        break;
    }
    return isWinner;
}

// logic for checking 3 in a row
bool checkOne(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[2] && arr[2] == arr[3] || letter == arr[4] && arr[4] == arr[7] || letter == arr[5] && arr[5] == arr[9]) {
        isWinner = true;
    }
    return isWinner;
}

bool checkTwo(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[5] && arr[5] == arr[8]) {
            isWinner = true;
    }
    return isWinner;
}

bool checkThree(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[1] && arr[1] == arr[2] || letter == arr[5] && arr[5] == arr[7] || letter == arr[6] && arr[6] == arr[9]) {
        isWinner = true;
    }
    return isWinner;
}

bool checkFour(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[5] && arr[5] == arr[6]) {
        isWinner = true;
    }
    return isWinner;
}

bool checkFive(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[1] && arr[1] == arr[9] || letter == arr[2] && arr[2] == arr[8] || letter == arr[3] && arr[3] == arr[7] || letter == arr[4] && arr[4] == arr[6]) {
        isWinner = true;
    }
    return isWinner;
}

bool checkSix(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[4] && arr[4] == arr[5] || letter == arr[3] && arr[3] == arr[9]) {
        isWinner = true;
    }
    return isWinner;
}

bool checkSeven(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[1] && arr[1] == arr[4] || letter == arr[5] && arr[5] == arr[3] || letter == arr[8] && arr[8] == arr[9]) {
        isWinner = true;
    }
    return isWinner;
}

bool checkEight(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[5] && arr[5] == arr[2]) {
        isWinner = true;
    }
    return isWinner;
}

bool checkNine(char arr[10], char letter) {
    bool isWinner = false;
    if (letter == arr[1] && arr[1] == arr[5] || letter == arr[7] && arr[7] == arr[8] || letter == arr[3] && arr[3] == arr[6]) {
        isWinner = true;
    }
    return isWinner;
}