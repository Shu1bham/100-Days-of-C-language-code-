//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main() {
    int n, reversed = 0, digit, orig; //orig = original
    printf("Enter n: ");
    scanf("%d", &n);
    orig = n;

    while (n != 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    if (orig == reversed) {
        printf("Palindrome.\n");
    } else {
        printf("Not palindrome.\n");
    }
    return 0;
}