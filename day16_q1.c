//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>

int main() {
    int n, digit, res = 0, place = 1; // res = result
    printf("Enter n: ");
    scanf("%d", &n);

    while (n>0) {
        digit = n % 2;
        res = res + digit * place;
        place = place * 10;
        n = n/2;
    }
    printf("Binary is: %d\n", res);
    return 0;
}