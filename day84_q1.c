// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    const char *names[] = {"SUCCESS", "FAILURE", "TIMEOUT"};
    char word[20];
    int found = -1;

    scanf("%19s", word);

    for (int i = SUCCESS; i <= TIMEOUT; i++)
    {
        if (strcmp(word, names[i]) == 0)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Invalid status\n");
        return 0;
    }

    enum Status s = (enum Status)found;

    switch (s)
    {
    case SUCCESS:
        printf("Operation successful\n");
        break;
    case FAILURE:
        printf("Operation failed\n");
        break;
    case TIMEOUT:
        printf("Operation timed out\n");
        break;
    }

    return 0;
}