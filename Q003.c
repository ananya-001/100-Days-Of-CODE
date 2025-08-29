//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the breadth : ");
    scanf("%d", &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("Area of rectangle :%d\n", area);
    printf("Perimeter of rectangle :%d", perimeter);
    return 0;
}
