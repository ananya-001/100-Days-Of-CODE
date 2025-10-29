// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7
*/

#include <stdio.h>
int main(){
    int size1, size2, temp;
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    int nums1[size1];
    printf("Enter %d elements in array1: ", size1);
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &nums1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    int nums2[size2];
    printf("Enter %d elements in array2: ", size2);
    

    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &nums2[i]);
    }
    int merged[size1+size2];
    for (int i = 0; i < size1; i++)
    {
        merged[i]=nums1[i];
    }
    for (int i = size1; i < size1+size2; i++)
    {
        merged[i]=nums2[i-size1];
    }
    for (int i = 0; i < (size1+size2)-1; i++)
    {
        for (int j = 0; j < (size1+size2)-i-1; j++)
        {
            if (merged[j]>merged[j+1])
            {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }   
        }       
    }
    printf("Sorted array is: ");
    printf("[ ");
    for (int i = 0; i < size1+size2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("]");
    return 0;  
}