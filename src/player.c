#include "../include/maze.h"
#include "../include/player.h"

int playerX = 1;
int playerY = 1;

void movePlayer(char input){
    int newX = playerX;
    int newY = playerY;

     if(input == 'w')newY--;
    else if(input == 's')newY++;
    else if(input == 'a')newX--;
    else if(input == 'd')newX++;
    char nextTile = dungeon[newY][newX];

     if(nextTile == '.' || nextTile == 'X'){
        dungeon[playerY][playerX] = '.';
        playerX = newX;
        playerY = newY;
        dungeon[playerY][playerX] = 'p';
     }

}
