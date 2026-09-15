// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main()
{
    long long n, original, digit, reversed = 0, place = 1;
    int count = 0;

    scanf("%lld", &n);

    if (n == 0)
    {
        printf("1\n");
        return 0;
    }

    original = n;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    n = original;

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        reversed = reversed + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("%0*lld\n", count, reversed);

    return 0;
}