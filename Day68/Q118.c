/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main()
{
   int n,i,j;
   printf("Enter n : ");
   scanf("%d",&n);
   int nums1[n+1];
   printf("Enter nums1[]: ");
   for(i=0;i<n;i++){
       scanf("%d",&nums1[i]);
       
   } 
  int missing_element, sum=0;
  int expected_sum = n*(n+1)/2;
   for(i=0;i<n;i++){
       sum=sum+nums1[i];
   }
   missing_element=expected_sum-sum;
   printf("%d",missing_element);
    return 0;
}
