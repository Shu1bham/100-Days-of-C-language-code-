// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

enum Month
{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    const char *names[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    char word[10];
    int found = -1;

    scanf("%9s", word);

    for (int i = JAN; i <= DEC; i++)
    {
        if (strcmp(word, names[i]) == 0)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Invalid month\n");
        return 0;
    }

    enum Month m = (enum Month)found;

    switch (m)
    {
    case FEB:
        printf("28 or 29 days\n");
        break;
    case APR:
    case JUN:
    case SEP:
    case NOV:
        printf("30 days\n");
        break;
    default:
        printf("31 days\n");
    }

    return 0;
}