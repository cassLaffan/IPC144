#include "./More_File_Reading.h"

void readNamesFile(){
    FILE *fp; // conventionally, files are named fp
    char filename[10] = "names.txt"; 
    char tempName[NAME_MAX] = ""; // empty memory
    fp = fopen(filename, "r"); //the r means it's for reading!

    // Always check to see if the file is valid!
    if(!fp){
        printf("It's file broken day, my dudes. %s \n", filename);
        return; //This exits a void function early! No return value!
    }

    // fgets reads a file line-by-line into a string (pointer)
    while(fgets(tempName, NAME_MAX, fp)){
        printf("%s\n", tempName);
    }

    // Always close your file
    fclose(fp);
}

void writeToNamesFile(char name[NAME_MAX]){
    FILE *fp; // conventionally, files are named fp
    char filename[10] = "names.txt"; 
    fp = fopen(filename, "a"); //the a means you're appending!

    // Always check to see if the file is valid!
    if(!fp){
        printf("It's file broken day, my dudes. %s \n", filename);
        return; //This exits a void function early! No return value!
    }

    // fprintf functions nearly identically to printf, save for
    // needing the extra file pointer argument (to tell it which file to write to!)
    fprintf(fp, "%s\n", name);

    // Always close your file
    fclose(fp);
}
