/*Q57: Find the sum of array elements.


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

int main()
{
   int num;
   int sum = 0 ;
   printf("enter num  : ");
   scanf("%d",&num);
    int arr[num];
   for(int i = 0;i<num;i++){
       
       printf("enter i :");
       scanf("%d", &arr[i]);
       sum = sum + arr[i];
       printf("sum = %d", sum);
   } 
  
   return 0;
}
