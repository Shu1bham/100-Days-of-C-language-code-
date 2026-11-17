// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Menu
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    const char *names[] = {"ADD", "SUBTRACT", "MULTIPLY"};
    char word[20];
    int a, b, found = -1;

    scanf("%19s %d %d", word, &a, &b);

    for (int i = ADD; i <= MULTIPLY; i++)
    {
        if (strcmp(word, names[i]) == 0)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Invalid choice\n");
        return 0;
    }

    enum Menu choice = (enum Menu)found;

    switch (choice)
    {
    case ADD:
        printf("%d\n", a + b);
        break;
    case SUBTRACT:
        printf("%d\n", a - b);
        break;
    case MULTIPLY:
        printf("%d\n", a * b);
        break;
    }

    return 0;
}