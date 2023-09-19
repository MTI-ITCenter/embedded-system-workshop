//
// Created by Youssef Abbas on 27/03/2023.
//

/*
 *
 *
1. Test the main flow against the wrong symbol choice
2. Test the main flow against repeated symbol choice
3. Test the main flow against X player winning:
- All Rows winning (3)
- All Columns winning (3)
- All Diagonals winning (2)
4. Test the main flow against O player winning:
- All Rows winning (3)
- All Columns winning (3)
- All Diagonals winning (2)
5. Test the main flow against X player draw case at least three draw cases
 */
#include <stdio.h>
#include <stdint.h>
#include <ctype.h>


// Board size
#define BOARD_SIZE 9
#define NUM_OF_PLAYER 2

// Possible game states
#define GAME_CONTINUE 2
#define GAME_DRAW 1
#define GAME_WIN 0

// Board representation
uint8_t board[BOARD_SIZE];
// Players' configurations
uint8_t configArray[2];

void drawBoard(uint8_t *board){
    // This function will take a board as an input and prints it on the console
}
void updateBoard(uint8_t *board,uint8_t position , uint8_t value){
    // This function will take the board, position to update and value to set in this position

}

uint8_t getPlayerSymbol(uint8_t playerNumber, uint8_t * symbol){
    //This function will take player number and asks the player to choose between X and O (case insensitive)
    // This function will return 0 when the input symbol is not wrong and/or was not chosen before
    // This function will return 1 when the input symbol is wrong and/or was chosen before



}

void setPlayerConfig(uint8_t *configArray){
    // This function will prompt and asks each user about their preferred symbols and saves it in the configArray

}
void loadAndUpdate(uint8_t playerNumber) {
  
}


void getGameState(uint8_t *gameState){
   
}
// This function will check after each move if there is a win, draw or continue playing.

//- Returns 0 for winning
//- Returns 1 for draw
//- Returns 2 for continue

int main() {
    uint8_t player = 0, gameState;
    for (int i = 0; i < BOARD_SIZE; i++) {
        board[i] = ' ';
    }
    setPlayerConfig(configArray);
    do {
        drawBoard(board);
        loadAndUpdate(player);
        getGameState(&gameState);
        player = (player + 1) % NUM_OF_PLAYER;
    } while (gameState == GAME_CONTINUE);
    drawBoard(board);
    if (gameState == GAME_WIN) {
        printf("Player %d wins!\n", player);
    } else {
        printf("Draw!\n");
    }
    return 0;
}
