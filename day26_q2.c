/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main()
{
    int i, j, size, half;

    for (i = 1; i <= 5; i++)
    {
        half = (i <= 5 - i + 1) ? i : (5 - i + 1);
        size = 2 * half - 1;

        for (j = 1; j <= size; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}