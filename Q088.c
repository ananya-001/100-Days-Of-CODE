// Q88: Replace spaces with hyphens in a string.
/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
*/

#include <stdio.h>
int main(){
    char str[400];
    printf("Enter the string: ");
    gets(str);
    int i=0;
    while (str[i]!='\0'){
        if (str[i]==' ')
        {
            str[i]='-';
        }
        i++;
    }
    printf("Output: %s", str);
    return 0;
}