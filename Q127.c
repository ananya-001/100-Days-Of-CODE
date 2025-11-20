// Q127 : Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include <stdio.h>
int main(){
    FILE *f1;
    FILE *f2;
    char str[500];
    f1= fopen("input.txt", "r");
    if (f1==NULL)
    {
        printf("--Error: Could not open input.txt.--");
        fclose(f1);
        return 0;
    }
    f2=fopen("output.txt", "w");
    if (f2==NULL)
    {
        printf("--Error: Could not open output.txt.--");
        fclose(f2);
        fclose(f1);
        return 0;
    }
    int i=0;   
    
    while (fgets(str, 200, f1)!=NULL)
    {
            while (str[i]!='\0')
        {
            if (str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
            i++;
        }
        fputs(str,f2);
    }
    printf("--Completed--");
    fclose(f1);
    fclose(f2);
    return 0;  
}