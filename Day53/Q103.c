/*Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
#include <stdio.h>

int main()
{
   int n;
  
   printf("enter n :");
   scanf("%d",&n);
    int a[n];
   printf("Enter a[]: ");
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
int i,j;
int left_sum[i]=0,right_sum[i]=0;
for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        left_sum[i]=left_sum[i]+a[j];
    }
}
for(i=0;i<n;i++){
    for(j=n;j>i;j--){
        right_sum[i]=right_sum[j]+a[i];
    }
}
for(i=0;i<n;i++){
    if(left_sum[i]==right_sum[i]){
        printf("%d",i);
    }
}
    return 0;
}
