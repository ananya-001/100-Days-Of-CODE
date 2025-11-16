// Q121 : Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int age;
    FILE *fp;

    printf("Name : ");
    gets(str);

    printf("Age : ");
    scanf("%d", &age);

    fp= fopen("info.txt","w");
    if (fp==NULL)
    {
        printf("--ERROR--");
        return 0;
    }

    fprintf(fp, "Name: %s  Age: %d", str,age);
    printf("File created successfully! Data written to info.txt.");
    return 0;
}