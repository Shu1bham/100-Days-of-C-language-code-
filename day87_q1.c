// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    const char *names[] = {"ADMIN", "USER", "GUEST"};
    char word[20];
    int found = -1;

    scanf("%19s", word);

    for (int i = ADMIN; i <= GUEST; i++)
    {
        if (strcmp(word, names[i]) == 0)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Invalid role\n");
        return 0;
    }

    enum Role r = (enum Role)found;

    switch (r)
    {
    case ADMIN:
        printf("Welcome Admin!\n");
        break;
    case USER:
        printf("Welcome User!\n");
        break;
    case GUEST:
        printf("Welcome Guest!\n");
        break;
    }

    return 0;
}