#include "./Game_Commands.h"

struct Dungeon createDungeon(){
    struct Dungeon newDungeon;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 16; j++){
            newDungeon.map[i][j] = 0;
        }
    }
    return newDungeon;
}

void printDungeon(struct Dungeon* aDungeon){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 16; j++){
            printf("%d", aDungeon->map[i][j]);
        }
        printf("\n");
    }
}

// Assume we call this on an empty dungeon, with only
// 0 fields.
void generateMobLocation(struct Dungeon* aDungeon){
    int row;
    int column;
    int monster;

    for(int i = 0; i <= 9; i++){
        row = rand() % 4;
        column = rand() % 15;
        monster = (rand() % 3) + 2;

        aDungeon->map[row][column] = monster;
    }

    aDungeon->map[3][15] = 1;
    aDungeon->playerRow = 3;
    aDungeon->playerCol = 15;

    printDungeon(aDungeon);
}

void move(struct Dungeon* aDungeon){
    printf("North: w, South: s, West: a, East: d\n");
    printf("Please enter a direction to move in: (w, a, s, d): ");

    char direction;
    scanf("%c", &direction);
    aDungeon->map[aDungeon->playerRow][aDungeon->playerCol] = 0;

    switch (direction){
        case 'w':
            aDungeon->playerRow--;
        case 'a':
            aDungeon->playerCol--;
        case 's':
            aDungeon->playerRow++;
        case 'd':
            aDungeon->playerCol++;
        default:
            printf("Incorrect input!!\n");
    }

    // TODO: Check if player ends up on monster, initialize battle if so
    // TODO: update coordinates correctly
    // TODO: Loop for movements

}

void battle(struct Dungeon* aDungeon, struct CharacterData* player);