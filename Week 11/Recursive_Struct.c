#include "./Recursive_Struct.h"

struct Tree* makeTree(int root) {
    struct Tree* newTree = malloc(sizeof(struct Tree));
    newTree->value = root;
    newTree->leftChild = NULL;
    newTree->rightChild = NULL;
    return newTree;
}

void insertLeaf(struct Tree* tree, int value){
    if(!tree){
        tree = makeTree(value);
    }
    else{
        if(value < tree->value){
            if(!tree->leftChild){
                tree->leftChild = makeTree(value);
            }
            else{
                insertLeaf(tree->leftChild, value);
            }
        }
        else{
            if(!tree->rightChild){
                tree->rightChild = makeTree(value);
            }
            else{
                insertLeaf(tree->rightChild, value); 
            }
        }
    }
}

void printTree(char* prefix, struct Tree* tree, int isLeft){
    if (tree){
        printf("%s", prefix);

        char* next = isLeft ? "|__" : "|---";

        printf("%s", next);

        // print the value of the node
        printf("%d\n", tree->value);

        char* loopNext = isLeft ? "|   " : "    ";

        //concatenating strings
        char* result = malloc(strlen(prefix) + strlen(loopNext) + 1);

        strcpy(result, prefix);
        strcat(result, loopNext);

        // enter the next tree level - left and right branch
        printTree(result, tree->leftChild, 1);
        printTree(result, tree->rightChild, 0);
    }
}