/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".


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

int main()
{
    int n,i,j,target, f_i=-1,f_j=-1;
    printf("Enter n and target : ");
    scanf("%d %d",&n,&target);
    int nums[n];
    printf("Enter nums[]: ");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                f_i=i;
                f_j=j;
            }
            
        }
    }
    printf("%d %d",f_i,f_j);
    return 0;
}
