// Q105 : Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1
*/

#include <stdio.h>
int main()
{
    int size, majority=-1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
 
    for (int i = 0; i < size; i++)
    {
        int c1=0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                c1=c1+1;
            } 
        }
        if (c1>(size/2))
        {
            majority=arr[i];
            break;
        }
        
    }
    printf("Majority Element: %d", majority);
    return 0;
}