#ifndef MAZE_H
#define MAZE_H

#define WIDTH 30
#define HEIGHT 15

void generateMaze();

#include "player.h"

void generateMaze(char maze[HEIGHT][WIDTH]);
void displayMaze(char maze[HEIGHT][WIDTH], player p);

#endif
