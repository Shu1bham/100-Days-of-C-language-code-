//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<stdio.h>

int main() {
    int n, original, digit=0, power=1, first, last, result;
    printf("Enter n: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        digit++;
        n = n/10;
    }
    for (int i=1; i < digit; i++) {
        power = power*10;
    }
    first = original / power;
    last = original % 10;

    result = original - (first * power) - last + (last * power) + first;

    printf("%d\n", result);

    return 0;
}