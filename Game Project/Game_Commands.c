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
    srand(SEED);

    // 10 is the number of monsters
    for(int i = 0; i <= 9; i++){
        row = rand() % 4;
        column = rand() % 15;
        monster = (rand() % 3) + 2;
        //assigns monster to place on map   
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
        int win = battle(aDungeon, aDungeon->map[row][col]);
        if(win == 1){
            aDungeon->playerRow = row;
            aDungeon->playerCol = col;
            aDungeon->map[aDungeon->playerRow][aDungeon->playerCol] = 1;
        }
    }
    else{
        aDungeon->playerRow = row;
        aDungeon->playerCol = col;
        aDungeon->map[aDungeon->playerRow][aDungeon->playerCol] = 1;
    }

}

int battle(struct Dungeon* aDungeon, int monster){
    // add run option
    printf("You have encountered a");

    switch(monster){
        case 2:
            printf("n imp!\n");
            break;
        case 3:
            printf(" goblin!\n");
            break;
        case 4:
            printf(" troll!\n");
            break;
        default:
            break;
    }

    printf("Pick an action: Run (r), Attack (a), Give Up (g): ");
    char action;
    int result;
    scanf("%c", &action);

    switch(action){
        case 'a':
            result = attack(aDungeon->player, monster);
            break;
        case 'r':
            result = 2;
            //move(aDungeon);
            break;
        case 'g':
            result = -1;
            aDungeon->player->health = 0;
            break;
        default:
            printf("Bad input! Hurry and pick an action!\n");
    }

    while(getchar() != '\n'){}
    return result;
}

int attack(struct CharacterData* player, int monster){

    int monsterHealth = monster * 3;
    int randomDamage;
    int playerDamage;
    int result = -1;
    char action;
    srand(SEED);
    while(monsterHealth > 0 && player->health > 0){
        while(getchar() != '\n'){}
        printf("Your health: %d\n", player->health);
        printf("You have to fight the monster! Press 'a' to attack or press 'r' to run. ");
        scanf("%c", &action);

        if(action == 'r'){
            printf("Running reduces your health by 1!\n");
            player->health--;
            break;
        }

        playerDamage = rand() % 4;

        printf("You hit the monster for %d damange!\n", playerDamage);

        monsterHealth -= playerDamage;


        if(monsterHealth > 0){
            printf("The monster now has %d health!\n", monsterHealth);
            randomDamage = rand() % monster;
            player->health -= randomDamage;
            printf("The monster hits you for %d damage!\n", randomDamage);
        }
        else{
            printf("You won the battle!\n");
        }
    }

    // Return whether or not the player has won the fight
    return player->health <= 0 ? -1 : 1;

}