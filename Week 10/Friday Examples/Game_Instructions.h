#ifndef GAME_INSTRUCTIONS_H
#define GAME_INSTRUCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CharacterData{
    char* name;
    int gold;
    int health;
};


void displayIntro();

/*
* The function that displays the game's rules.
*/
void displayRules();

/*
* Creation function for the character data struct.
*/
struct CharacterData makeCharacter();



#endif