//Q60: Count positive, negative, and zero elements in an array.
/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>
int main(){
    int size, c1=0, c2=0, c3=0;
    printf("Enter the number to elements you want to enter in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements (separated by spaces): \n", size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size; i++)
    {
        if (arr[i]>0)
        {
            c1=c1+1;
        }
        else if(arr[i]<0)
        {
            c2=c2+1;
        }
        else{
            c3=c3+1;
        }
    }
    printf("Positive=%d,  ", c1);
    printf("Negative=%d,  ", c2);
    printf("Zero= %d", c3);
    return 0;
}