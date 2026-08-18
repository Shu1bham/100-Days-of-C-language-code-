#include<stdio.h>
#include<math.h>

int main()
{
    float p, r, t;     // p=principle, r=rate, t=time
    float SI, CI, amt; // SI=simple interest, CI=Compund Interest, amt= amount

    printf("Enter Principle: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    SI = (p * r * t) / 100;          // Simple Interest= (Principle * rate * time)/100
    amt = p * pow((1 + r / 100), t); // Amount= Principle * (1 + Rate/100)^Time
    CI = amt - p;

    printf("Simple Interest is: %f \n", SI);
    printf("Compund Interest is: %f \n", CI);

    return 0;
}