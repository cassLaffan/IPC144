#include "./Game_Instructions.h"

void displayIntro(){
    printf("=====Welcome to Cass' Liar=====\n");
    printf("===============================\n");
    printf("You are tasked with getting to the bottom of\n");
    printf("mysterious disappearances of a few townsfolk in\n");
    printf("nearby dungeon.\n\n");
}

void displayRules(){
    printf("To travel, enter one of the following directions:\n");
    printf("North, South, East, West.\n");
}

struct CharacterData makeCharacter(){
    printf("What is your name? ");
    char* characterName = malloc(sizeof(char*));
    fgets(characterName, 256, stdin);
    struct CharacterData player = {characterName, 0, 10};
    return player;
}