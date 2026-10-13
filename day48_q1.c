// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

int main()
{
    char a[100], b[100];
    int n = 0, m = 0, i, k, found = 0;

    scanf("%s %s", a, b);

    while (a[n] != '\0')
        n++;
    while (b[m] != '\0')
        m++;

    if (n == m)
    {
        for (k = 0; k < n && !found; k++)
        {
            for (i = 0; i < n; i++)
                if (a[(i + k) % n] != b[i])
                    break;
            if (i == n)
                found = 1;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}