// Q28 : Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>
int main()
{
    int num, pro;
    pro=1;
    printf("Enter the number of even number for sum : ");
    scanf("%d", &num);
    for(int i=2; i<=num; i=i+2){
        pro=pro*i;
    }
    printf("Sum : %d", pro);
    return 0;
}