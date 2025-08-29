//Q1 : Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int first, second, sum;
    printf("Enter first number :");
    scanf("%d", &first);
    printf("Enter second number :");
    scanf("%d", &second);
    sum=first + second;
    printf("Sum of two number is : %d", sum);
}

