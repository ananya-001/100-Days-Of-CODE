// Q85: Reverse a string.
/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
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
        i++;
    }
    char str2[i+1];
    for(int j=0; j<i; j++){
        str2[j]=str[(i-1)-j];
    }
    str2[i]='\0';
    printf("Reversed string is: ");
    puts(str2);
    return 0;
}