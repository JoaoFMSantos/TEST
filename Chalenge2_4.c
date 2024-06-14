#include <stdio.h>
#include <stdlib.h>



/*

Crie uma simulação do jogo Pedra-Papel-Tesoura 

	1. Humano contra Humano
	2. Humano contra maquina 
	3. maquina contar máquina 
	4. dar ao utilizador a hipótese de escolher o modo de jogo e quantos jogos devem ser realizados 

*/

char machinePlayerOne();
char machinePlayerTwo();
void gamePlay (int gameSelection, char playerOne, char playerTwo);

int main(int argc, char *argv[]) {

// Random Value Generator:

	srand(time(NULL));

// Variables:

	char playerOne;
	char playerTwo;
	int gameSelection;
	
// INTRO:

	printf("Welcome to the Rock | Paper | Scissors game !!!\n\n");
	
	printf("Select:\n\n1 - Multiplayer\n2 - Singleplayer\n3 - Watcher\n\n");	
	printf("Please enter the type of game you which to play: ");
	scanf("%d", &gameSelection);
	
	printf("\nGame Options:\nR - Rock\nP - Paper\nS - Scissors\n\n");
	
	
// Game Type selection:

	gamePlay (gameSelection, playerOne, playerTwo);

	return 0;
}


char machinePlayerOne(){

// Inputs MACHINE1:
		
	int machineOption = rand() % 3;
	char playerOne;
	switch (machineOption){
		
		case 0: 
		playerOne = 'R';
		break;
		case 1:
		playerOne = 'P';
		break;
		case 2: 
		playerOne = 'S';
		break;

	}
	
	printf(" %c\n", playerOne);
	return playerOne;
	
}

char machinePlayerTwo(){

// Inputs MACHINE2:
		
	int machineOption = rand() % 3;
	char playerTwo;
	switch (machineOption){
		
		case 0: 
		playerTwo = 'R';
		break;
		case 1:
		playerTwo = 'P';
		break;
		case 2: 
		playerTwo = 'S';
		break;

	}
	
	printf(" %c\n", playerTwo);
	return playerTwo;
	
}

void gamePlay (int gameSelection, char playerOne, char playerTwo){
	
	//GAME MODE SELECTION:
	
		switch(gameSelection){
		
		case 1:
	
		// Inputs:

			printf("Player ONE - Please enter your option: ");
			scanf(" %c", &playerOne);
	
			printf("Player TWO - Please enter your option: ");
			scanf(" %c", &playerTwo);
		break;
		
		case 2: 
	
		// Inputs PLAYER ONE:

			printf("Player ONE - Please enter your option: ");
			scanf(" %c", &playerOne);

		// Inputs MAQUINA:	

			playerTwo = machinePlayerOne();
		break;
		
		case 3:

		// Inputs MAQUINA:	

			playerOne = machinePlayerOne();
			playerTwo = machinePlayerTwo();
		break;	
	}
	
	// GAME OUTCOMES:
	
		if ( ((playerOne == 'R' || playerOne == 'r')  && (playerTwo == 'S' || playerTwo == 's')) || ((playerOne == 'S' || playerOne == 's')  && (playerTwo == 'P' || playerTwo == 'p')) || ((playerOne == 'P' || playerOne == 'p')  && (playerTwo == 'R' || playerTwo == 'r')) ){
		
			printf("Player ONE is the WINNER!!!");
		
		}else if ( ((playerOne == 'R' || playerOne == 'r')  && (playerTwo == 'P' || playerTwo == 'p')) || ((playerOne == 'P' || playerOne == 'p')  && (playerTwo == 'S' || playerTwo == 's')) || ((playerOne == 'S' || playerOne == 's')  && (playerTwo == 'R' || playerTwo == 'r'))  ){
		
			printf("Player TWO is the WINNER!!!");
		
		}else if ( ((playerOne == 'R' || playerOne == 'r')  && (playerTwo == 'R' || playerTwo == 'r')) || ((playerOne == 'P' || playerOne == 'p')  && (playerTwo == 'P' || playerTwo == 'p')) || ((playerOne == 'S' || playerOne == 's')  && (playerTwo == 'S' || playerTwo == 's'))){
		
			printf("It's a TIE! Please try again");
		
		}else{
		
			printf("Unvalid option entered! Please try again.");
		
		}
	
}
