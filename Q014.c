// Q14 : Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/

#include <stdio.h>
int main()
{
    char var;
    printf("Enter a character : ");
    scanf("%c", &var);
    if(var=='a' || var=='e' || var=='i' || var=='o' || var=='u'|| var=='A' || var=='E' || var=='I' || var=='O' || var=='U')
    {
        printf("%c is a vowel.", var);
    }
    else
    {
        printf("%c is a consonant.", var);
    }
    return 0;
}