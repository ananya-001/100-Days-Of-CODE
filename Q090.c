// Q90: Toggle case of each character in a string.
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO 
*/


#include <stdio.h>
int main(){
    char str[500], ch;
    int count=0;
    printf("Enter the string: ");
    gets(str);
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]>64 && str[i]<91)
        {
            str[i]=str[i]+32;
        }
        else if (str[i]>96 && str[i]<123)
        {
            str[i]=str[i]-32;
        }  
        i++;
    }
    printf("Output: %s", str);
    return 0;
}



































































