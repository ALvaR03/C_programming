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
bool placesLeft(char arr[10]);

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

	// Verifica os resultados que seram mostrados na tela depois do jogo
	if (gameResult != 'D') {
		printResult = (gameResult == 'X') ? 1 : 2;
		printf("Player %d ganhou", printResult);
	} else {
		printf("Deu Velha!!!");
	}

    return (0);
}

//D = desenha o X = player ganhador 1 O = player ganhador 2
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
		clrscr();
		printBoard(board);

		if(checkWinner(board, playerChar, indexChange)){
			placeLeft = false;
		} else if(placesLeft(board) == false) {
			playerChar = 'D';
			placeLeft = false;
		} else {
			playerChar = (playerChar == 'X') ? 'O' : 'X';
		}
	
		return playerChar;
    }
}
	// Verifica e escreve a escolha do jogador
int playerPick(char arr[10], char letter) {
	int player;
	int choice;
	bool validChoice = false;

	if (letter = 'X' ) {
		player = 1;
	} else {
		player = 2;
	}

	while (validChoice == false) {
		printf("Jogador %d selecione um numero: ", player);
		scanf("%d", choice);
		if (checkEntry(choice) == false) {  
			printf("Entrada invalida, tente novamente: ");
		} else {
			validChoice = checkMove(arr, choice); 
			if (validChoice == false) {
				printf("Entrada invalida, tente novamente: ");
			}
		}
	}
	return choice;
}

//Mostra a atualizacao da tabela no formato jogo da velha
void printBoard(char arr[10]) {
	
	//Mostra o titulo e o cabecalho do jogador
	printf("\n\t\t Jogo Da Velha \n \n");
	printf("\t Player 1 (X) = Player 2 (O) \n\n\n");

	int index = 1;

	while (index < MAXIDEX) {
		// Borda do numero do eixo y
		printf("\t \t | \t \t | \n");
		// Borda do numero do eixo y
		printf("\t%c\t | \t%c\t | \t%c\n", arr[index], arr[index+1], arr[index+2]);
		// Borda do numero do eixo y
		printf("\t \t | \t \t | \n");

		//Evitar varios eixos verticais x 
		if (index <= 4) {
			// Borda do eixo X
			printf("_________________|_______________|_______________\n");
		}
		index += 3;
	}
	return;
}	

// Limpa a tela e perminte mostra a tabela atualizada
void clrscr() {
	system("@cls || clear");
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
	int numArray[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i < 9; i++) {
		if (numArray[i] == input) {
			validInput = true;
			break;
		}
	}
	return validInput;
}

bool placesLeft(char arr[10]) {
	bool placeLeft = false;
	for (int i = 1; i < MAXIDEX; i++) {
		if (arr[i] != 'X' && arr[i] != 'O') {
			placeLeft = true;	
			break;
		}
	}

	return placeLeft;
}

// verifica a partir da posição atual tocada se três iguais estiverem seguidas
bool checkWinner(char arr[10], char letter, int numberSquare) {
	// Ganhador boleano
	bool isWinner;
	// switch que verifica o movimento do ganhador
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