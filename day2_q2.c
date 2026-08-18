//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/


#include<stdio.h>

int main()
{
    float r, pie;       // r = radius
    float area, circum; // circum = circumference

    printf("Enter radius: ");
    scanf("%f", &r);

    pie = 3.141;
    area = pie * r * r;
    circum = 2 * pie * r;

    printf("Area of the circle is: %f \n", area);
    printf("Circumference of the circle is: %f \n", circum);

    return 0;
}