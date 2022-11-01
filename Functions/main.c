#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Mike", 40);
    sayHi("Andrew", 32);
    sayHi("Jai", 22);
    sayHi("Oscar", 30);

    printf("\nTop");
    sayHibuddy();
    printf("Bottom");

    return 0;

}

void sayHibuddy(){
    printf("Hello User");
}

void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}
