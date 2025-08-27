// Q6 : Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping the numbers become :\n");
    printf("First number : %d\n",a);
    printf("Second number : %d",b);
    return 0;
}