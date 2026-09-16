// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j, matrix[50][50], transpose[50][50];
    printf("Enter rows & columns: ");
    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter matrix: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            if (j == 0)
                printf("%d", transpose[i][j]);
            else
                printf(" %d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}