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