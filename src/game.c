#include "../include/maze.h"
#include "../include/player.h"
#include "../include/game.h"

int checkWin(){
    return (dungeon[playerY][playerX] == 'x');
}