#include <stdio.h>

/*This program will show you how to manipulate pointers in detail*/

//This is a basic function that manupulates pointers.
//Notice how it doesn't have a return type (or it's void)?
//This means that it doesn't return a value because it doesn't need to.
void multiplyPointer(int* pntr){
    *pntr = *pntr * 7;
}

//We can pass multiple pointers to a function!
//Remember: pOne and pTwo are "parameters", much like pntr in the previous function.
void multiPointerExample(double* pOne, double* pTwo){
    *pOne = *pOne * *pTwo;
    *pTwo = 2 * *pTwo;
}

//What this function will do is print an address to the screen!
//Notice how I don't use an * when I print the memory address?
//That's because the parameter for this function is already an address
//(or a pointer containing an addreess, to be specific).
//Also, %p is the address printing value
void printMemory(int* addr){
    printf("The memory address for addr is: %p\n", addr);
}

//Let's think about why these functions work before calling them in our main().
//In our first two functions, I utilize another * when manipulating the values within the functions.
//What I'm doing there is actually "dereferencing" them, meaning I'm working directly 
//with their values and not their addresses. However, since the functions use pointers as 
//parameters, they already "know" where the variables are in memory, and thus work directly from there.

//In short, think of it in the same terms as you would in printf vs. scanf:
//scanf needs the address of something to store a value, whereas printf simply needs a value to print.
//The same can be said when manipulating variables in memory.

int main(){
    int i = 2;
    double a = 2.1, b = 2.3;

    //See how I don't assign these to any given variable like I do in
    //the non-pointer examples in ExampleTwo.c? That's because we don't need
    //to! This syntax allows us to manipulate i, a and b without making new variables.
    multiplyPointer(&i);
    multiPointerExample(&a, &b);

    printf("Manipulating i = 2 at memory level leads to: i = %d\n", i);
    printf("Manipulating a = 2.1, b = 2.3 at memory level leads to: a = %.3lf and b = %.3lf\n", a, b);
    printMemory(&i);
}