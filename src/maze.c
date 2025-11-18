#include<stdio.h>
#include<stdlib.h>
#include "maze.h"
#include "player.h"

void generateMaze(char maze[HEIGHT][WIDTH]){


    srand(7);

    for(int y = 0; y<HEIGHT; y++){
     for(int x = 0; x<WIDTH; x++){
            
        if(y == 0 || y == HEIGHT - 1 || x == 0 || x == WIDTH - 1){
            maze[y][x] = '#';
        }
             else{
                int r = rand() % 100;
                if(r < 15)
                     maze[y][x] = '#';  //wall
                else if( r < 20)
                     maze[y][x] = 'T';  //Trap
                else if( r < 25)
                     maze[y][x] = 'M';  //Monster
                else
                     maze[y][x] = '.';  //Path
            }
        }
    }

    maze[HEIGHT - 2][WIDTH - 2] = 'E';  // Exit
}

void displayMaze(char maze[HEIGHT][WIDTH], player p) {
    for(int y = 0; y <  HEIGHT; y++){
        for(int x = 0; x < WIDTH; x++){

            if(p.x == x && p.y == y){
                printf("P");
            }
            else{
                printf
            }
        }
    }
}

