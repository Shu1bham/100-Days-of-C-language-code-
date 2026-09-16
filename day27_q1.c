/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main()
{
    int i, j, n = 5, stars;

    for (i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            stars = 2 * i - 1;
        }
        else
        {
            stars = 2 * (2 * n - i) - 1;
        }

        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}