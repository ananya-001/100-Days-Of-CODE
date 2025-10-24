//Q84: Convert a lowercase string to uppercase without using built-in functions.
/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[500];
    printf("Enter the string (in lowercase): ");
    gets(str);
    int i=0;
    while (str[i]!='\0'){
        str[i]=str[i]-32;
        printf("%c", str[i]);
        i++;}
    return 0;
}