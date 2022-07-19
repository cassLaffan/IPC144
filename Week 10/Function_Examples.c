#include "./Function_Examples.h"

// What is a factorial? Well, some of you may
// have seen a 
int factorialExample(int num){
    if(num < 0){
        // cannot take the factorial of a negative number
        return num;
    }
    // Behaviour as per the definition of factorials
    if(num == 0){
        return 1;
    }
    else{
        // Oh my! How are we calling a function within
        // itself?? This is called recursion and I will
        // talk about it more in class.
        int newNum = num * factorialExample(num - 1);
        return newNum;
    }
}

void sortNumberList(int* numArray, int length){
    for(int i = 0; i < length; i++){
        for(int j = 0;j < length - 1; j++){
            if(numArray[j] < numArray[j + 1]){
                // What we are doing here is very simple. We're comparing
                // ints at different places in the array and then if they're
                // out of order, we switch them
                int temp = numArray[j];
                numArray[j] = numArray[j+1];
                numArray[j + 1] = temp;
            }
        }
    }
}

// If we assume that our array is sorted, how might
// we search an array in a more logical way than just
// going from one end to the other?
int searchForIndex(int* searchArray, int num, int length){
    int halfwayPoint; //convert to int so we get an whole number
    int left = 0;
    int right = length;

    // Work our way inward
    while(left < right){
        int halfwayPoint =  (left + right) / 2;

        // Work our way to the right or left, depending
        if(searchArray[halfwayPoint] > num){
            left = halfwayPoint;
        }
        else if(searchArray[halfwayPoint] < num){
            right = halfwayPoint;
        }
        else if (searchArray[halfwayPoint] == num){
            return halfwayPoint;
        }
        if(halfwayPoint == 0 || halfwayPoint == length - 1){
            return -1;
        }
    }
    return -1;
}