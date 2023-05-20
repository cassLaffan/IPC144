#include <stdio.h>
#include <math.h>

/*This example will explore calculating the surface area and volume of a icosahedron (20 sided dice)*/
/*This will take user input as its side length parameter*/

float volume(float a){

    return (5.0/12.0) * (3 + sqrt(5)) * pow(a, 3);
}

int main(){

    printf("What is the edge length of your icosahedron?\n");

    float edgeLength;

    scanf("%f", &edgeLength);

    printf("The volume of your icosahedron is: %f\n", volume(edgeLength));

    return 0;
}