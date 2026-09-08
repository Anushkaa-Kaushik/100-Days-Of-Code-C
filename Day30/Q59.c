/*Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/
#include <stdio.h>

int main()
{
   int n;
   int even =0;
   int odd = 0;
   printf("enter n : ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       printf("enter arr[i]");
       scanf("%d",&arr[i]);
   }
   
   for(int i=0;i<n;i++){
       if(arr[i]%2==0){
        even = even +1;   
       }else even = even+0;
   
  
   if(arr[i]%2!=0){
       odd = odd+1;
   }else odd = odd +0;
       
   }
   printf("even = %d , odd = %d ",even,odd);
    return 0;
}
