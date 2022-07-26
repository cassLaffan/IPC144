#ifndef RECURSIVE_STRUCT_H
#define RECURSIVE_STRUCT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Here we can find an example of a struct defined recursively
// I do not expect you all to be able to create something like this
// at your level. Rather, I want you to be aware of things
// like this existing.
struct Tree{
    int value;
    struct Tree* leftChild;
    struct Tree* rightChild;
};

struct Tree* makeTree(int);

void insertLeaf(struct Tree*, int);

void printTree(char*, struct Tree*, int);

#endif