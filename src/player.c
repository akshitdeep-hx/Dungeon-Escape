#include<stdio.h>
#include "player.h"
#include "maze.h"

void inItPlayer(Player *p){
    p -> x = 1;
    p -> y = 1;
    p -> health = 100;
}

void movePlayer(Player *p, char maze[][WIDTH], char input){
    int newX = p -> x;
    int newY = p -> y;


    if(input == 'w'){
        newY--;
    }
    else if(input == 's'){
        newY++;
    }
    else if(input == 'a'){
        newX--;
    }
    else if(input == 'd'){
        newX++;
    }
    if(maze[newX][newY]){
        p -> x = newX;
        p -> y = newX;
    }
}

int checkCollision(Player *p, char tile){
    if(title == 'T'){
        p -> health -= 10;
        printf("You Stepped on a trap Health Depleted:%d\n", p ->health);
    }
    else if(tile == 'M'){
        p -> health -= 25;
        printf("\n A monster damaged you!Health: %d\n", p->health);
    }
    else if(tile == 'E'){
           return 1;
    }
    return 0;
}