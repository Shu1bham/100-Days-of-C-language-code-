#include <stdio.h>

int main()
{
    int a, b;
    int sum;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum of the two numbers is: %d \n", sum);

    return 0;
}