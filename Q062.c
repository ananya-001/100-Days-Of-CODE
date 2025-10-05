// Q62 : Reverse an array without taking extra space.
/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/

#include <stdio.h>
int main(){
    int size;
    printf("Enter the number to elements you want to enter in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements (separated by spaces): \n", size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=size; i>=1; i--)
    {
        printf("%d ", arr[i-1]);
    }
    return 0;
}