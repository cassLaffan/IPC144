#include "./Header_Example.h"

struct Pet createPet(char* n, char* s, char* b, int a, float w, int adoptable, int adopted){
    struct Pet newPet;
    newPet.name = n;
    newPet.species = s;
    newPet.breed = b;
    newPet.age = a;
    newPet.weight = w;
    newPet.isAdoptable = adoptable;
    newPet.isAdopted = adopted;
    return newPet;
}

void setAsAdoptable(struct Pet* pet){
    pet->isAdoptable = 1;
}

void setAsAdopted(struct Pet* pet){
    pet->isAdopted = 1;
}

struct Pet getPetData(){
    printf("Please enter the following information:\n");
    char* name = malloc(sizeof(char*));
    printf("Pet name: ");
    scanf("\n%s", name);
    char* species = malloc(sizeof(char*));
    printf("Pet species: ");
    scanf("\n%s", species);
    char* breed = malloc(sizeof(char*));
    printf("Breed: ");
    scanf("\n%s", breed);
    int age;
    printf("Pet age: ");
    scanf("\n%d", &age);
    float weight;
    printf("Pet weight: ");
    scanf("\n%f", &weight);
    int adoptable;
    printf("Is this pet adoptable? ");
    scanf("\n%d", &adoptable);
    
    return createPet(name, species, breed, age, weight, adoptable, 0);
}

void viewAllPets(struct Pet* pets, int num, int adoptable){
    for(int i = 0; i < num; i++){
        if(adoptable && pets[i].isAdoptable){
            printf("Pet name: %s\n", pets[i].name);
            printf("Pet species: %s\n", pets[i].species);
            printf("Pet weight: %lf\n", pets[i].weight);
            printf("--------------------------\n");
        }
        else if(!adoptable){
            printf("Pet name: %s\n", pets[i].name);
            printf("Pet species: %s\n", pets[i].species);
            printf("Pet weight: %lf\n", pets[i].weight);
            printf("--------------------------\n");
        }
    }
}