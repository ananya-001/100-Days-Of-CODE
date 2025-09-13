//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/

#include <stdio.h>
int main()
{
    int n;
    float a,b, sum;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    sum=1;
    for ( int i=1 ; i<n; i++ )
    {
        a= 3.0 + (i-1)*2.0;
        b= 4.0 + (i-1)*2.0;
        sum = sum + (a/b);
    }
    printf("SUM : %f", sum);
    return 0;
}