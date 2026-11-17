// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main()
{
    int m, n;

    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int merged[m + n];
    for (int i = 0; i < m; i++)
        merged[i] = nums1[i];
    for (int i = 0; i < n; i++)
        merged[m + i] = nums2[i];

    int total = m + n;
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = i + 1; j < total; j++)
        {
            if (merged[j] < merged[i])
            {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    for (int x = 0; x < total; x++)
    {
        if (x > 0)
            printf(" ");
        printf("%d", merged[x]);
    }
    printf("\n");

    return 0;
}