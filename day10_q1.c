// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>

int main()
{
    float x, y, z; // x, y, z = side length
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &x, &y, &z);

    if (x == y && y == z)
    {
        printf("Equilateral traingle.\n");
    }
    else if (x == y || y == z || x == z)
    {
        printf("Isosceles triangle. \n");
    }
    else
    {
        printf("Scalene triangle.\n");
    }
    return 0;
}
