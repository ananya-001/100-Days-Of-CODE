//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
    int first, second, sum, diff, pro, quo;
    printf("Enter first number:");
    scanf("%d",&first);
    printf("Enter second number:");
    scanf("%d", &second);
    sum=first+second;
    diff=first-second;
    pro=first*second;
    quo=first/second;
    printf("Sum : %d\n", sum);
    printf("Difference : %d\n", diff);
    printf("Product : %d\n", pro);
    printf("Quotient : %d\n", quo);
    return 0;
}
