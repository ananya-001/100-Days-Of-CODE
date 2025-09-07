// Q23 : Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled
*/

#include <stdio.h>
int main()
{
    int day, fine;
    printf("Enter the number of late days : ");
    scanf("%d", &day);
    if (day>0 && day<=5)
    {
        fine= day*2;
        printf("Fine : %d", fine);
    }
    else if(day>6 && day<=10)
    {
        fine=day*4;
        printf("Fine : %d", fine);
    }
    else if (day>10 && day<=15)
    {
        fine=day*6;
        printf("Fine : %d", fine);
    }
    else if (day>15 && day<=20)
    {
        fine=day*8;
        printf("Fine : %d", fine);
    }
    else if (day>20 && day<=25)
    {
        fine=day*10;
        printf("Fine : %d", fine);
    }
    else if (day>25 && day<=30)
    {
        fine=day*12;
        printf("Fine : %d", fine);
    }
    else
    {
        printf("Membership Cancelled.");
    }
    return 0;
}
