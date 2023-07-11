#ifndef PET_EXAMPLES_H
#define PET_EXAMPLES_H

#include <stdio.h>
#include <stdlib.h>

struct Pet{
    char* name;
    char* species;
    char* breed;
    int age;
    float weight;
    int isAdoptable;
    int isAdopted;
};

// Helper functions for Pet
struct Pet createPet(char* n, char* s, char* b, int a, float w, int adoptable, int adopted);
void setAsAdoptable(struct Pet* pet);
void setAsAdopted(struct Pet* pet);

struct Pet getPetData();
void viewAllPets(struct Pet* pets, int num, int adopt);

#endif
