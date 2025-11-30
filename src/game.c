#include "../include/maze.h"
#include "../include/player.h"
#include "../include/game.h"
int gameWon = 0;

int checkWin(){
    return gameWon;   // checks if player is on exit tile
}