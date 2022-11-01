#include <stdio.h>
#include <stdlib.h>

// prototype - for not getting error function below main()
double cube(double num);


int main()
{
    printf("Answer: %f\n", cube(5.0));
    return 0;
}


double cube(double num){
    // double result = num * num * num;
    return num * num * num;
}
