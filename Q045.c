// Q45 : Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22
*/

#include <stdio.h>
int main()
{
    float sum, a, b;
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    sum=0;
    for ( int i=1; i<=n ; i++){
        a = 2.0 + ( i-1)*2.0;
        b = 3.0 + ( i-1)*4.0;
        sum = sum + (a/b);
    }
    printf(" SUM : %f", sum);
    return 0;
}