// Q8 : Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    float n, sum;
    printf("Enter the number : ");
    scanf("%f", &n);
    sum=(n/2)*(2*1 + (n-1)*1);
    printf("Sum of n natural numbers is : %f", sum);
}
