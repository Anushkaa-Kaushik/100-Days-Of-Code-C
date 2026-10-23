/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

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
    int n, i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    int num[n];
    printf("Enter num [] : ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    } int count[n];
    for(i=0;i<n;i++){
         count[i]=0;
        for(j=0;j<n;j++){
         
          if(num[i]==num[j])
          count[i]++;
        }
    }
    int majority=-1;
    for(i=0;i<n;i++){
       if(count[i]>n/2){
           majority=num[i];
       }
    }printf("%d",majority);
    return 0;
}
