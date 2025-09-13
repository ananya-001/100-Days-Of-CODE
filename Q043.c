// Q43 : Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>
int main()
{
    int n, fact,rem, sum,org;
    printf("Enter the number to check if it is Strong number : ");
    scanf("%d", &n);
    org=n;
    sum=0;
    while(n>0){
        fact=1;
        rem=n%10;
        while(rem>0){
          fact=fact*rem;
          rem=rem-1;  
        }
        n=n/10;
        sum=sum+fact;
    }
    if (org==sum)
    {
        printf("%d is a Strong number. ", org);
    }
    else
    {
        printf("%d is not a Strong number.", org);
    }
    return 0;
}