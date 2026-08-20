//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/


#include<stdio.h>

int main()
{
    float CP, SP, result;
    printf("Enter cost price: ");
    scanf("%f", &CP);
    printf("Enter selling price: ");
    scanf("%f", &SP);

    if (SP > CP)
    {
        result = ((SP - CP) / CP) * 100;
        printf("Profit = %.2f%%", result);
    }
    else if (CP > SP)
    {
        result = ((CP - SP) / CP) * 100;
        printf("Loss = %.2f%%", result);
    }
    else
    {
        printf("No profit, No loss");
    }
    return 0;
}