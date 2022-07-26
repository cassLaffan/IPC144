#include "./Recursive_Struct.h"
#include "./File_Reading.h"

int main(){
    struct Tree* tree = makeTree(5);
    insertLeaf(tree, 1);
    insertLeaf(tree, 4);
    insertLeaf(tree, 9);
    insertLeaf(tree, 8); 

    printTree("", tree, 0);

    readFile();

    return 0;
}