//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20.

*/

#include<stdio.h>

int main()
{
    float a, b;       // a = length, b = breadth
    float area, peri; // peri = perimetre

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    area = a * b;
    peri = 2 * (a + b);

    printf("Area of the rectangle is: %f \n", area);
    printf("Perimetre of the rectangle is: %f \n", peri);

    return 0;
}