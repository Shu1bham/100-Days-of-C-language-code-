// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ' ')
            printf("-");
        else
            printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}