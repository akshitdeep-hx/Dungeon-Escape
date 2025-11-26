#include<stdio.h>
#include "../include/maze.h"
#include "../include/player.h"
#include "../include/game.h"

int main(){
    char input;

    while(1){
        printDungeon();

        printf("\nMove (w/a/s/d):");
        scanf(" %c", &input);
        movePlayer(input);

        if(checkWin()){
            printDungeon();
            printf("\n You Escaped the Dungeon!\n");
            break;
        }
    }
    return 0;
}