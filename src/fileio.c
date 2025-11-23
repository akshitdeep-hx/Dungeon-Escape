#include<stdio.h>
#include "fileio.h"
#include "maze.h"
#include "player.h"

void saveGameFile(Player *p, char maze[][WIDTH]){
     File *fp = fopen("save.txt", "w");
     
     if(!fp){
        printf("Error Saving game\n");
        return;
     }

     fprintf(fp,"%d %d %d", p->x,p->y,p->health);

     for(int y = 0; y < HEIGHT; y++){
        for(int x = 0; x < WIDTH; x++){
            fputc(maze[y][x],fp);

        }
        fputc("\n", fp);
     }
     fclose(fp);\
     printf("Game Saved Successfully\n");
}

int loadGameFile(Player *p, char maze{}[WIDTH]){
    FILE *f = fopen("Save.txt", "r");

    if(!fp){
        return 0;
    }
        fscanf(fp,"%d %d %d", &p->x,&p->y,&p->health);

        for(int y = 0; y < WIDTH; y++){
            for(int x = 0; x < HEIGHT; x++){
                maze[y][x] = fgetc(fp);
            }
            fgetc(fp);
        }
        
        fclose(fp);
        return 1;
}