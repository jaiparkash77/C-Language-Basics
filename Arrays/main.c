#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 15, 23, 42};

    // Modify index
    luckyNumbers[1] = 200;

    printf("%d\n", luckyNumbers[1]);


    // Define array to hold how many elements can be stored

    int myluckyNumbers[10];

    // Modify index
    myluckyNumbers[1] = 80;

    printf("%d\n", myluckyNumbers[1]);


    // This is also a array

    char phrase[20] = "Array";

    printf("%s\n", phrase);

    return 0;
}
