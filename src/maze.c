#include <stdio.h>
#include "../include/maze.h"

char dungeon[ROWS][COLS] = {           // initial dungeon layout
    "############",
    "#P..#......#",
    "#.#.#.###..#",
    "#.#.....#X.#",
    "#.#####.#..#",
    "#.......#..#",
    "############"
};

void printDungeon(){                    // prints a 2d representation of the dungeon
    for(int i = 0; i < ROWS; i++){
        printf("%s\n", dungeon[i]);
    }
}