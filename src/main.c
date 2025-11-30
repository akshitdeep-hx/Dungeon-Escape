#include<stdio.h>
#include "../include/maze.h"
#include "../include/player.h"
#include "../include/game.h"

int main(){
    char input;
    
    while(scanf(" %c", &input) == 1){
        printDungeon();
                                           
        movePlayer(input);                           
        // reads moves until checkWin is true
        if(checkWin()){
            printDungeon();
            printf("\n You Escaped the Dungeon!\n");
            return 0;
        }
    }
    // if we reach EOF without winning
    printDungeon();                
    if(!checkWin()){
        printf("\n Game Over!\n");
    }
    return 0;
}
        
           