#include "./Pet_Functions.h"

int main(){
    // We want to have at most 100 pets.
    struct Pet pets[100];
    int currentPets = 0;
    struct Pet newPet;

    int userInput = 0;
    printf("Welcome to the Seneca Humane Society!\n");
    printf("-------------------------------------\n");
    while(userInput != 5){
        printf("Please select one of the following options:\n");
        printf("1 - Add a new pet to the kennel.\n");
        printf("2 - View adoptable pets.\n");
        printf("3 - View ALL pets.\n");
        printf("4 - Adopt a pet!\n");
        printf("5 - Exit.\n");

        scanf("%d", &userInput);

        switch (userInput){
            case 1:
                newPet = getPetData();
                pets[currentPets] = newPet;
                currentPets++;
            case 2:
                viewAllPets(pets, currentPets, 1);
            case 3:
                viewAllPets(pets, currentPets, 0);
            case 4:
                break;
            case 5:
                break;
            default:
                printf("Invalid entry.");
        }
    }

    return 1;
}