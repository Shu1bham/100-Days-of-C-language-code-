// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int count[256] = {0};
    int i;

    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b))
    {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; a[i] != '\0'; i++)
    {
        count[(unsigned char)a[i]]++;
        count[(unsigned char)b[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}