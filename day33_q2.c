// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int n, i, arr[100], key, pos = -1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);

    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > key)
        {
            arr[i + 1] = arr[i];
            pos = i;
        }
        else
        {
            break;
        }
    }

    arr[pos == -1 ? n : pos] = key;
    n++;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d", arr[i]);
        else
            printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}