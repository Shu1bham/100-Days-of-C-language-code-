// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            continue;
        printf("%c", c);
    }

    return 0;
}