/* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>
int main(){
    for(int i=1; i<=9; i=i+2){
        for ( int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=1; i<=8; i=i+2){
        for (int j=7; j>=i; j--){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}