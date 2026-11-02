/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main()
{
   int n,i,j;
   printf("Enter n : ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter arr[] : ");
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
for(i=0;i<n-1;i++){
  for(j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
          int c=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=c;
      }}
  }    for(i=0;i<n;i++){
      if(arr[i]==arr[i+1])
      printf("%d",arr[i]);
  }

    return 0;
}
