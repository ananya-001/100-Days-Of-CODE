// Q58 : Find the maximum and minimum element in an array.
/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/

#include <stdio.h>
int main(){
    int size;
    printf("Enter the number of elements you want to enter in the array : ");
    scanf("%d",&size);
    printf("Enter the %d elements in the array (separated by spaces) :\n",size);
    int arr[size];
    for( int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int max= arr[0], min=arr[0];
    for( int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];}
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("MAX= %d  ", max);
    printf("min= %d", min);
    return 0;
}