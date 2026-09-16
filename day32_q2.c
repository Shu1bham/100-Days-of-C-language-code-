// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    int n, digit, freq[10] = {0}, i, maxCount, result;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    maxCount = 0;
    result = 0;

    for (i = 0; i <= 9; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);

    return 0;
}