#include <stdio.h>

int practiceTyping(){
    // Num is the number of times the user has entered valid input
    int num = 0;
    int count = -1;

    // This is the syntax for a do/while loop. This loop will
    // ALWAYS execute at least once before checking the condition.
    do{
        printf("Please enter a number other than 0: ");
        scanf("%d", &num);
        count++;
    }while(num);

    return count;
}

int main(){
    // Recall how I talked about functions last week.
    // Get in the habit of using them!
    int result = practiceTyping();
    printf("The result is: %d", result);

    return 0;
}