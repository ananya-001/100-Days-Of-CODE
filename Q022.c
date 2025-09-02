// Q22 : Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include <stdio.h>
int main()
{
    int cp, sp, lp, pp;
    printf("Enter the Cost Price : ");
    scanf("%d", &cp);
    printf("Enter the Selling Price : ");
    scanf("%d", &sp);
    lp=((cp-sp)*100)/cp;
    pp=((sp-cp)*100)/cp;
    if(sp>cp)
    {
        printf(" Profit Percentage : %d", pp);
    }
    else if(sp==cp)
    {
        printf("No Profit No Loss.");
    }
    else
    {
        printf(" Loss Percentage : %d", lp);
    }
}

