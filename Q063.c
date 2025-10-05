// Q63 : Merge two arrays.
/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>
int main(){
    int size1, size2;
    printf("Enter the number of elements you want to enter in array1: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements in the array1 (separated by spaces):\n", size1);
    for(int i=0; i<size1; i++){
        scanf("%d", &arr1[i]);}
    printf("Enter the number of elements you want to enter in array2: ");
    scanf("%d", &size2);
    printf("Enter %d elements for array2 9separated by spaces):\n", size2);
    int arr2[size2];
    for(int i=0; i<size2; i++){
        scanf("%d", &arr2[i]);}
    int size3;
    size3=size1+size2;
    int arr3[size3];
    for(int i=0; i<size1; i++){
        arr3[i]=arr1[i];
    }
    for(int i=size1; i<(size1+size2); i++){
        arr3[i]=arr2[i-size1];
    }
    printf("Merged elements : ");
    for(int i=0; i<size3; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}