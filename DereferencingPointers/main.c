#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%p \n", pAge);
    printf("%d \n", *pAge); // De Refrencing pointer
    printf("%d \n", *&age);
    printf("%d \n", &*&age); // memory address
    printf("%d \n", *&*&age);

    return 0;
}
