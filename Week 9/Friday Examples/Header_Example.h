#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <stdio.h>
#include <stdlib.h>

/*
* This week, we will work through creating a multi-file program.
*
* Program requirements:
*
* You have been tasked with creating a small program that tracks
* pets at a kennel. It should have the following functionalities:
*
* 1) There should be a way to keep track of pets currently at the
* kennel.
* 2) There should be a way to keep track of pets who have been 
* adopted.
* 3) There should be a way to add pets to the kennel list, and to
* mark whether or not they are adoptable.
* Bonus: Try to make a file that allows you to persist these changes
* between program runs.
*/

struct Pet{
    char* name;
    char* species;
    char* breed;
    int age;
    // Weight is in lbs
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
