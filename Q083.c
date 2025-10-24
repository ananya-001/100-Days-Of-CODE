// Q83: Count vowels and consonants in a string.
/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[500];
    int c1=0, c2=0;
    printf("Enter the string(in lowercase): ");
    gets(str);
    int i=0;
    while (str[i]!='\0'){
        if (str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            c1=c1+1;}
        else{
            c2=c2+1;}
        i++;
     }
    printf("Vowels: %d   ",c1);
    printf("Consonants: %d", c2);  
    return 0; 
}



















