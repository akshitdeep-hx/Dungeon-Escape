#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "maze.h"
#include "player.h"

void generateMaze(char maze[HEIGHT][WIDTH]) {

   
    srand(time(NULL));

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {

            if (y == 0 || y == HEIGHT - 1 || x == 0 || x == WIDTH - 1) {
                maze[y][x] = '#';  // boundary wall
            }
            else {
                int r = rand() % 100;

                if (r < 15)
                    maze[y][x] = '#';     // random wall
                else if (r < 20)
                    maze[y][x] = 'T';     // trap
                else if (r < 23)
                    maze[y][x] = 'M';     // monster
                else
                    maze[y][x] = '.';     // path
            }
        }
    }

    
    maze[HEIGHT - 2][WIDTH - 2] = 'E';  // exit
}

void displayMaze(char maze[HEIGHT][WIDTH], Player p) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (p.x == x && p.y == y)
                printf("P");
            else
                printf("%c", maze[y][x]);
        }
        printf("\n");
    }

    printf("\nHealth: %d\n", p.health);
}
