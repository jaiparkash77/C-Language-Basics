#include <stdio.h>
#include <stdlib.h>

int main()
{
    //while loop
    int i = 1;
    while(i <= 5){
        printf("%d\n", i);
        i++;
    }

    // for loop
    int j;
    for(j =1; j <=5; j++){
        printf("%d\n", j);
    }

    // for loop with array

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    int k;
    for(k = 0; k < 6; k++){
        printf("%d\n", luckyNumbers[k]);
    }

    return 0;
}
