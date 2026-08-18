//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/


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