// Q116 : Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1
*/

#include <stdio.h>
int main(){
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the integer target value: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++)
    {
        for (int j=i+1; i < size; i++)
        {
            if (arr[i]+arr[j]==target)
            {
                printf("%d %d", i, j);
            }
            break;
            
        }
        
    }
    return 0;

}