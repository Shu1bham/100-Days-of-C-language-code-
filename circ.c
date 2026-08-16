#include<stdio.h>

int main()
{
    float r, pie;       // r = radius
    float area, circum; // circum = circumference

    printf("Enter radius: ");
    scanf("%f", &r);

    pie = 3.14;
    area = pie * r * r;
    circum = 2 * pie * r;

    printf("Area of the circle is: %f \n", area);
    printf("Circumference of the circle is: %f \n", circum);

    return 0;
}