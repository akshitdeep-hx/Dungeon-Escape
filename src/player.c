#include "../include/maze.h"
#include "../include/player.h"
#include "../include/game.h"

int playerX = 1;                             // initial player position
int playerY = 1;                             // initial player position

void movePlayer(char input){                 // updates player position based on input
    int newX = playerX;
    int newY = playerY;

    if(input == 'w'){
         newY--;
    }
    else if(input == 's'){
         newY++;
    }
    else if(input == 'a'){
         newX--;
    }
    else if(input == 'd'){
         newX++;
    }
    char nextTile = dungeon[newY][newX];

     if(nextTile == '.' ){          // valid move
        dungeon[playerY][playerX] = '.';
        playerX = newX;
        playerY = newY;
        dungeon[playerY][playerX] = 'P';
     }
     else if(nextTile == 'X'){
         dungeon[playerY][playerX] = '.';     // move onto exit set win  flag
         playerX = newX;
         playerY = newY;
         dungeon[playerY][playerX] = 'P';
         gameWon = 1;                         // win signal
     }
             // else blocked and does nothing
}
