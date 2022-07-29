#include "./Game_Commands.h"

struct Dungeon createDungeon(struct CharacterData* player){
    struct Dungeon newDungeon;
    newDungeon.player = player;
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

    int row = aDungeon->playerRow;
    int col = aDungeon->playerCol;

    switch (direction){
        case 'w':
            row--;
            break;
        case 'a':
            col--;
            break;
        case 's':
            row++;
            break;
        case 'd':
            col++;
            break;
        default:
            printf("Incorrect input!!\n");
    }   

    while(getchar() != '\n'){}

    if(aDungeon->map[row][col]){
        battle(aDungeon, aDungeon->map[aDungeon->playerRow][aDungeon->playerCol]);
    }
    else{
        aDungeon->playerRow = row;
        aDungeon->playerCol = col;
        aDungeon->map[aDungeon->playerRow][aDungeon->playerCol] = 1;
    }

}

void battle(struct Dungeon* aDungeon, int monster){
    // add run option
    printf("You have encountered a ");

    switch(monster){
        case 2:
            printf("imp!\n");
            break;
        case 3:
            printf("goblin!\n");
            break;
        case 4:
            printf("troll!\n");
            break;
        default:
            break;
    }

    printf("Pick an action: Run (r), Attack (a), Give Up (g): ");
    char action;
    scanf("%c", &action);

    switch(action){
        case 'a':
            break;
        case 'r':
            //move(aDungeon);
            break;
        case 'g':
            aDungeon->player->health = 0;
            break;
        default:
            printf("Bad input! Hurry and pick an action!\n");
    }

    while(getchar() != '\n'){}
}