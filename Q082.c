//Q82: Print each character of a string on a new line.
/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[400];
    printf("Enter the string: ");
    gets(str);
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
    
}