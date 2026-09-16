// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
    int n1, n2, i, arr1[100], arr2[100], merged[200], k = 0;
    printf("Enter n1: ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter n2: ");
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++)
    {
        merged[k] = arr1[i];
        k++;
    }

    for (i = 0; i < n2; i++)
    {
        merged[k] = arr2[i];
        k++;
    }

    for (i = 0; i < k; i++)
    {
        if (i == 0)
            printf("%d", merged[i]);
        else
            printf(" %d", merged[i]);
    }

    printf("\n");

    return 0;
}