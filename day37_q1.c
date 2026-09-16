// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j, matrix[50][50], rowSum[50];
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
        rowSum[i] = 0;
        for (j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    for (i = 0; i < rows; i++)
    {
        if (i == 0)
            printf("%d", rowSum[i]);
        else
            printf(" %d", rowSum[i]);
    }
    printf("\n");

    return 0;
}