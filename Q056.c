// Q56 : Read and print elements of a one-dimensional array.
/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/

#include <stdio.h>
int main(){
    int size;
    printf("Enter the number of elements you want in the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i=0; i<size; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array are as follows : \n");
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
    
}