// Q16 : Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0
*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3)
    {
        printf("%d is larger than %d and %d", num1, num2, num3);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("%d is larger than %d and %d", num2, num1, num3);
    }
    else
    {
        printf("%d is larger than %d and %d", num3, num1, num2);
    }
    return 0;
}