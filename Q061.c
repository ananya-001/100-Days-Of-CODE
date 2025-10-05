// Q61 : Search for an element in an array using linear search.
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/

#include <stdio.h>
int main(){
    int size, num;
    printf("Enter the number to elements you want to enter in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements (separated by spaces): \n", size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &num);
    for(int i=0; i<size; i++){
        if (arr[i]==num){
            printf("Found at index %d.",i);
        }
    }
    return -1;
}