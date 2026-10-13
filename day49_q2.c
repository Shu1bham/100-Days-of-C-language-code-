// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, last = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            str[i] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            last = i + 1;

    for (i = 0; i < last; i++)
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            printf("%c.", str[i]);

    if (last > 0)
        printf(" ");
    printf("%s", str + last);

    return 0;
}