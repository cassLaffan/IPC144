#ifndef FILE_MORE_H
#define FILE_MORE_H

#include <stdio.h>

#define NAME_MAX 50

// This function reads the names, line by line, from a file
void readNamesFile();

// This function appends a new name to the list of names
// in the file, then checks to see if it's been added
void writeToNamesFile(char name[NAME_MAX]);

#endif