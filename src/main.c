#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#include "game.h"
#include "fileio.h"

static void showMainMenu(){
    printf("\n=====================================\n");
    printf("         DUNGEON ESCAPE GAME\n");
    printf("=====================================\n");
    printf("1. Start New Game\n");
    printf("2. Load Game\n");
    printf("3. Exit\n");
    printf("=====================================\n");
}

static void handleUserChoice(char choice){
    switch(choice){
        case '1':
           startNewGame();
           break;
        case '2':
           loadGameFile();
           break;
        case '3':
           printf("\n Returning to Desktop");
           exit(0);
        default:
           printf("\n Invalid choice! Please Enter 1, 2 or 3.\n");      
    }
}

int main(){
    char choice;

    while(1){
        showMainMenu();

        printf("\n Enter your Choice:");
        scanf(" %c", &choice);
        choice = tolower(choice);

        handleUserChoice(choice);
    }
    return 0;
}