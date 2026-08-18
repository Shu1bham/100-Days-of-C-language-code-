//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/


#include<stdio.h>

int main() {
    int x, hr, min, sec;  //x= input time in seconds, hr= hours, min= minutes, sec= seconds
    printf("Enter time in seconds: ");
    scanf("%d", &x);

    hr= x/3600;
    min= (x%3600)/60;
    sec= x%60;

    printf("Current time is: %02d:%02d:%02d \n", hr, min, sec);

    return 0;
}