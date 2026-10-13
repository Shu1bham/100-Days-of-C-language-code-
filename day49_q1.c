// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            printf("%c.", str[i]);
    }

    return 0;
}