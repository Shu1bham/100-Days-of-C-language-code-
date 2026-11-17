// Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (in == NULL || out == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    int ch;
    int newWord = 1;

    while ((ch = fgetc(in)) != EOF)
    {
        if (isspace(ch))
        {
            newWord = 1;
        }
        else if (newWord)
        {
            ch = toupper(ch);
            newWord = 0;
        }
        else
        {
            ch = tolower(ch);
        }

        fputc(ch, out);
        putchar(ch);
    }
    printf("\n");

    fclose(in);
    fclose(out);
    return 0;
}