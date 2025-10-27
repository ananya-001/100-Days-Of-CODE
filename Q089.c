// Q89: Count frequency of a given character in a string.
/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/

#include <stdio.h>
int main(){
    char str[500], ch;
    int count=0;
    printf("Enter the string (in lowercase): ");
    gets(str);
    printf("Enter the character to count the frequency: ");
    scanf("%c", &ch);
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]==ch)
        {
            count=count+1;
        }
        i++;
    }
    printf("Frequency of %c in %s is %d. ",ch, str, count);
    return 0;
}