//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>

int main() {
    int n, temp, digcount = 0; //digcount = digit count
    printf("Enter n: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        digcount++;
        temp = temp/10;
    }
    int digit, power, sum=0;
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        power = 1;
        for (int i=0; i < digcount; i++) {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp/10;
    }
    if(sum == n) {
        printf("Amstrong number.\n");
    } else {
        printf("Not amstrong.\n");
    }
    return 0;
}