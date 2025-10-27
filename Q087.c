// Q87: Count spaces, digits, and special characters in a string.
/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/

#include <stdio.h>
int main(){
    char str[400];
    int c1=0, c2=0, c3=0, c4=0;
    printf("Enter the string: ");
    gets(str);
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]>64 && str[i]<91 || str[i]>96 && str[i]<123){
            c1=c1+1;}
        else if (str[i]>47 && str[i]<58){
            c2=c2+1;}
        else if (str[i]==' '){
            c3=c3+1;}     
        else{
            c4=c4+1;}
        i++;
    }
    printf("Spaces: %d  ,", c3);
    printf(" Digits: %d  ,",c2);
    printf(" Special: %d", c4);
    return 0;    
}