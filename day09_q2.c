/*

Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>

int main()
{
    float perc; // perc = obtained percentage
    printf("Enter obtained percentage: ");
    scanf("%f", &perc);

    if (perc >= 0 && perc < 60 )
    {
        printf("Obtained grade: F\n");
    }
    else if (perc >= 60 && perc <  70)
    {
        printf("Obtained grade: D\n");
    }
    else if (perc >= 70 && perc < 80)
    {
        printf("Obtained grade: C\n");
    }
    else if (perc >= 80 && perc < 90)
    {
        printf("Obtained grade: B\n");
    }
    else if (perc >= 90 && perc <= 100)
    {
        printf("Obtained grade: A\n");
    }
    else
    {
        printf("Invalid percentage.\n");
    }
    return 0;
}