// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j, matrix[50][50], sum = 0;
    printf("Enter rows and columns: ");
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
            sum = sum + matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}