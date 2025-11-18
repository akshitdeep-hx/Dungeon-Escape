#include<stdio.h>
#include "player.h"
#include "maze.h"

void inItPlayer(player *p){
    p -> x = 1;
    p -> y = 1;
    p -> health = 100;
}

void movePlayer(player *p, char maze[][WIDTH], char input){
    int newX = p -> x;
    int newY = p -> y;


    if()
}