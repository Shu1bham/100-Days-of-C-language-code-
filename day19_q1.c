// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>

int main() {
    int a, b, lcm;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int larger = (a>b) ? a : b;
    for (lcm = larger; ; lcm++) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
    }
    printf("LCM is: %d\n", lcm);
    return 0;
}