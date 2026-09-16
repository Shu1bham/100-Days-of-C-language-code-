/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main()
{
    int i, j, n = 4, stars, spaces;

    for (i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            stars = 2 * i - 1;
            spaces = n - i;
        }
        else
        {
            stars = 2 * (2 * n - i) - 1;
            spaces = n - (2 * n - i);
        }

        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}