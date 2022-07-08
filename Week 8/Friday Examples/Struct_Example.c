#include <stdio.h>
#include <stdlib.h>

/*
* I mentioned an employee class during Wednesday's lecture.
* Let's design a program that has the following characteristics:
* - An employee struct that has the employee's name, employee number, email, age and position.
* - A create employee function that creates an employee
* - A promotion function that changes the employee's position.
* - A termination function which fires and deletes the employee.
*/

struct Employee{
    char* name;
    int employeeNumber;
    char* email;
    int age;
    char* position;   
};

struct Employee createEmployee(char* n, int num, char* e, int a, char* p){
    struct Employee newEmp;

    newEmp.name = n;
    newEmp.employeeNumber = num;
    newEmp.email = e;
    newEmp.age = a;
    newEmp.position = p;

    return newEmp;
}

void promotion(char* newPosition, struct Employee* emp){
    emp->position = newPosition;

}

int main(){
    //struct Employee me = {"Cassandra\0", 28492, "Cassandra.Laffan@ryerson.ca\0", 27, "Lecturer\0"};
    struct Employee me = createEmployee("Cassandra\0", 28492, "Cassandra.Laffan@ryerson.ca\0", 27, "Lecturer\0");
    printf("%s\n", me.position);
    promotion("Dean\0", &me);
    printf("%s", me.position);
    return 0;
}