#include "./Using_File_Reading.h"

void readFile(struct Tree* tree){

    FILE *fp;
    char* filename = "ints.txt"; 
    fp = fopen(filename, "r"); //the r means it's for reading!

    //Let's check to see if the file actually opened.
    //If not, we'll exit the program with an early return statement

    // !NULL == true
    if(!fp){
        printf("It's file broken day, my dudes. %s \n", filename);
        return;
    }

    int entry;

    while (!feof(fp)){
        fscanf(fp, "%d", &entry);
        insertLeaf(tree, entry);
    }

    //remember to always close your files after you're done reading them
    fclose(fp);
}