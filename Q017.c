// Q17 : Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c, D, x, y;
    printf("A Quadratic eqaution is of the form ax^2+ bx +c.\n");
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    D=(b*b)-(4*a*c);
    x=(-b+pow(D,0.5))/2*a;
    y=(-b-pow(D,0.5))/2*a;
    if(D>0)
    {
        printf("Roots are real and different : %d,%d", x,y);
    }
    else if (D==0)
    {
        printf("Roots are real and equal : %d", x);
    }
    else{
        printf("Roots are complex.");
    }
    return 0;    
}