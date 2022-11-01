#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age; // pointer variable (storing memory address)
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * aGrade = &grade;


    printf("age's memory address: %p\n", &age);  //&age is a pointer
    return 0;
}
