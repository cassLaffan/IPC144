#include "./File_Reading.h"

void readFile(){

    FILE *fp; //remember, we discussed pointers last lab
    int arr[100]; //We know there are 100 integers in my associated text file.
    int num = 0;
    char* filename = "ints.txt"; 
    fp = fopen(filename, "r"); //the r means it's for reading!

    //Let's check to see if the file actually opened.
    //If not, we'll exit the program with an early return statement

    if(fp == NULL){
        printf("It's file broken day, my dudes. %s \n", filename);
        return;
    }

    //now we read the contents of the file to the terminal
    //This time I'm using an example of syntax that you guys have used, yourselves
    while (!feof(fp)){
        fscanf(fp, "%d", &arr[num]);
        num++;
    }

    //remember to always close your files after you're done reading them
    fclose(fp);

    for(int i = 0; i < 100; i++){
        printf("The array at index %d holds the value: %d\n", i, arr[i]);
    }
}