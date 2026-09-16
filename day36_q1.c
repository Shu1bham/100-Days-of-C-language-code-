// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j, matrix[50][50];
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
            if (j == 0)
                printf("%d", matrix[i][j]);
            else
                printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}