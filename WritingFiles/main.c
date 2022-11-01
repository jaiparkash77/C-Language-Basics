#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "a"); // fpointer stands for file pointer - w stands for write, a stands for append means adding new text (file can be created anytype like .css or .html

    fprintf(fpointer, "\nkelly, Customer serice"); // write information in the file


    fclose(fpointer);


    return 0;
}
