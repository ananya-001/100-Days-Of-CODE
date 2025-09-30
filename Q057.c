// Q57 : Find the sum of array elements.
/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/

#include <stdio.h>
int main(){
    int size, arr[size], sum=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&size);
    printf("Enter %d elements in the array (separated by space): \n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    printf("SUM : %d", sum);
    return 0;
}