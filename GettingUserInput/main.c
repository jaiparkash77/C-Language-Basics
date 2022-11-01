#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Character
    char grade;
    printf("Enter Your grade: ");
    scanf("%c", &grade);        // To get user input and storing in variable, Need to use ampersand symbol before variable
    printf("Your grade is %c\n", grade);

    // Integer
    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    // Double / Float
    double gpa;
    printf("Enter Your gpa: ");
    scanf("%lf", &gpa);             // To get user input of double we need to use %lf instead of f
    printf("Your gpa is %f\n", gpa);

    // String
    char name[20];
    printf("Enter Your name: ");
    scanf("%s", name);             // Not need to use ampersand symbol
    printf("Your name is %s\n", name);

    // String ( Grab whole line of text) - saperate this code if not working here
    char username[20];
    printf("Enter Your username: ");
    fgets(username, 20 , stdin);    // 20 is the limit of character and stdin stands for standard input
    printf("Your name is %s\n", username);


    return 0;
}
