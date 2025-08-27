// Q5 : Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float temp, newtemp;
    printf("Enter the temperature in Celsius :");
    scanf("%f", &temp);
    newtemp = (temp*(9.0/5.0))+32;
    printf("The converted temperature in Fahrenheit is : %f", newtemp);
    return 0;
}