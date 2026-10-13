// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, j, start = 0, end;
    char temp;

    fgets(str, sizeof(str), stdin);

    for (i = 0;; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;
            for (j = start; j < end; j++, end--)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }
            start = i + 1;
            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    printf("%s", str);
    return 0;
}