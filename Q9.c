// Q9 : Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
    float P,R,T,SI,CI,A;
    printf("Enter the principal : ");
    scanf("%f", &P);
    printf("Enter the rate : ");
    scanf("%f", &R);
    printf("Enter the Time : ");
    scanf("%f", &T);
    SI=(P*R*T)/100;
    A=P*pow((1+R/100),T);
    CI=A-P;
    printf("Simple Interest is : %f\n", SI);
    printf("Compound Interest is : %f", CI);
}