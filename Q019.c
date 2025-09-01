// Q19 : Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter first side : ");
    scanf("%d",&side1);
    printf("Enter second side : ");
    scanf("%d", &side2);
    printf("Enter third side : ");
    scanf("%d", &side3);
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
    {
        if(side1==side2 && side2==side3 && side1==side3)
        {
            printf("It is an EQUILATERAL Triangle.");
        }
        else if(side1 != side2 && side2 != side3 && side3!=side1)
        {
            printf("It is a SCALENE Triangle.");
        }
        else
        {
            printf("It is an ISOSCELES Triangle.");
        }
    }
    else{
        printf("Not a VALID triangle.");
    }
    return 0;
}