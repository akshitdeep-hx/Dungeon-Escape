#ifndef FILEIO_H
#define FILEIO_H

#include "player.h"
#include "maze.h"

void saveGameFile(Player *p, char maze[][WIDTH]);
void loadGameFile(Player *p, char maze[][WIDTH]);

#endif