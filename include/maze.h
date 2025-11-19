#ifndef MAZE_H
#define MAZE_H

#define WIDTH 30
#define HEIGHT 15

typedef struct Player Player;

void generateMaze(char maze[HEIGHT][WIDTH]);
void displayMaze(char maze[HEIGHT][WIDTH], Player p);

#endif
