#include "./Pet_Functions.h"

struct Pet createPet(char* n, char* s, char* b, int a, float w, int adoptable, int adopted){
    struct Pet newPet;
    strcpy(newPet.name, n);
    strcpy(newPet.species, s);
    strcpy(newPet.breed, b);
    newPet.age = a;
    newPet.weight = w;
    newPet.isAdoptable = adoptable;
    newPet.isAdopted = adopted;
    return newPet;
}

// Don't worry much about the -> notation this week. I'll talk about it next week
// Sneak peak: it replaces the . when accessing the innards of a struct, if it's a pointer
void setAsAdoptable(struct Pet* pet){
    pet->isAdoptable = 1;
}

void setAsAdopted(struct Pet* pet){
    pet->isAdopted = 1;
}

struct Pet getPetData(){
    printf("Please enter the following information:\n");
    char name[40];
    printf("Pet name: ");
    scanf("\n%s", name);
    char species[40];
    printf("Pet species: ");
    scanf("\n%s", species);
    char breed[40];
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