#include "./Game_Commands.h"
#include "./Game_Instructions.h"

/*
* Today, we will work through a slightly more complex
* problem, in hopes that we can apply our ideas to
* a cohesive program.
*
* The task is simple: create a short text based adventure
* that meets the following requirements:
*
* 1 - Starts the player off in a location and prints off
* some flavour text
* 2 - Takes direction inputs in the format of "north", "south"
* "east", "west"
* 3 - Allows the player to travel in a few directions and
* spawns one of three enemy monsters in game (goblin, imp, troll).
* 4 - The player can run or hit the monster with their sword.
* BONUS - The player can gain XP and level up
* BONUS - Once the player is level 10, they encounter a boss
*/

int main(){
    displayIntro();
    displayRules();

    struct CharacterData player = makeCharacter();
    printf("Your name is: %s", player.name);

    struct Dungeon ourDungeon = createDungeon();

    generateMobLocation(&ourDungeon);

    return 0;
}