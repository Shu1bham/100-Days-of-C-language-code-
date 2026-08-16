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