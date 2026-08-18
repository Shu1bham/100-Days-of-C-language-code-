#include<stdio.h>

int main()
{
    float c, f; // c = celsius, f = farenhite

    printf("Enter temprature in celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("%f c = %f f", c, f);

    return 0;
}