// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main()
{
    int n, i, arr[100], posCount = 0, negCount = 0, zeroCount = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            posCount++;
        }
        else if (arr[i] < 0)
        {
            negCount++;
        }
        else
        {
            zeroCount++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", posCount, negCount, zeroCount);

    return 0;
}