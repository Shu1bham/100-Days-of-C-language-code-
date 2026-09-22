// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main()
{
    int n, m;
    int a[100][100];

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int i = 0, j = 0;
    int up = 1;

    for (int count = 0; count < n * m; count++)
    {
        printf("%d ", a[i][j]);

        if (up)
        {
            if (j == m - 1)
            {
                i++;
                up = 0;
            }
            else if (i == 0)
            {
                j++;
                up = 0;
            }
            else
            {
                i--;
                j++;
            }
        }
        else
        {
            if (i == n - 1)
            {
                j++;
                up = 1;
            }
            else if (j == 0)
            {
                i++;
                up = 1;
            }
            else
            {
                i++;
                j--;
            }
        }
    }

    return 0;
}