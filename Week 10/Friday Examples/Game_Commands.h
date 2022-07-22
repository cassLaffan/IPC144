#ifndef GAME_COMMANDS_H
#define GAME_COMMANDS_H

#include <stdio.h>
#include "./Game_Instructions.h"

// Imp = 2, Goblin = 3, Troll = 4
/*
* 0004000000000002
* 0000000000000000
* 0000000001000000
* 0030000000000000
*/
struct Dungeon{
    int map[4][16];
    int playerRow;
    int playerCol;
};

struct Dungeon createDungeon();

void printDungeon(struct Dungeon* aDungeon);

/*
* Generates the locations of the baddies.
*/
void generateMobLocation(struct Dungeon* aDungeon);

/*
* Function to move the player inside the dungeon.
*/
void move(struct Dungeon* aDungeon);

/*
* Battle function!
*/
void battle(struct Dungeon* aDungeon, struct CharacterData* player);

#endif