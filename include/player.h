#ifndef PLAYER_H
#define PLAYER_H

#define WIDTH 30     // required for moveplayer width

typedef struct {
        int x;
        int y;
        int health;
} Player;

void inItPlayer(Player *p);
void movePlayer(Player *p, char maze[][WIDTH], char input);
void checkCollision(Player *p, char tile);
#endif