#include<stdio.h>
#include<ctype.h>
#include "game.h"
#include "maze.h"
#include "player.h"
#include "fileio.h"

void startNewGame(){
    char maze[HEIGHT][WIDTH]
    player p;
    char move;
    int running = 1;
    
    generateMaze(maze);
    inItPlayer(&p);

    while(running){
        displayMaze(maze , p);
        printf("\n move (W/A/S/D) or Q to Quit:");
        scanf("%c",&move);
        move = tolower(move);

        if(move == 'q'){
           printf("\n Returning to Main Menu......");
           break;
        }

        movePlayer(&p, maze, move);
        char title = maze[p.y][p.x];
        int result = checkCollision(&p, title);

        if(result ==  1){
            printf("\n You Escaped the Dungeon!\n");
            running =0;
        }
        else if(p.health <= 0){
            printf("\n Game Over!\n");
            running = 0;
        }
    }
}

void loadGame(){
    char maze[HEIGHT][WIDTH];
    player p;

    if(!loadGameFile(&p, maze)){
          printf("\nNo valid save file found.\n");
          return;
    }
    printf("\n Save file Loaded successfully!\n");
    char move;
    int running = 1;
    while(running){
        displayMaze(maze,p);

        printf("\n Move (W/A/S/D) or Q to quit:");
        scanf("%c", &move);
        move = tolower(&move);

        if(result == 'q'){
            printf("\nReturning to Main Menu.....");
            break;
        }

        movePlayer(&p,maze,move);

        char title = maze[p.y][p.y];
        int result = checkCollision(&p,title);

        if(result == 1){
           printf("\nYou Escaped the Dungeon!\n");
           running = 0;
        }
        else if(p.health <= 0){
           printf("\nGame Over\n");
           running = 0;
        }
    }
}