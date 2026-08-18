//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main()
{
    float a, b;
    float sum, diff, prod, quot;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;

    printf("Sum of the numbers is: %f \n", sum);
    printf("Difference of the numbers is: %f \n", diff);
    printf("Product of the numbers is: %f \n", prod);
    
    if (b == 0) {
        printf("Quotient of the numbers is: undefined \n");
    }
    else {
        printf("Quotient of the numbers is: %f \n", quot);
    }

    return 0;
}