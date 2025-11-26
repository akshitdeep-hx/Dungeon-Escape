#include <stdio.h>
#include "../include/maze.h"

char dungeon[ROWS][COLS] = {
    "############",
    "#P..#......#",
    "#.#.#.###..#",
    "#.#.....#X.#",
    "#.#####.#..#",
    "#.......#..#",
    "############"
};

void printDungeon(){
    for(int i = 0; i < ROWS; i++){
        printf("%s\n", dungeon[i]);
    }
}