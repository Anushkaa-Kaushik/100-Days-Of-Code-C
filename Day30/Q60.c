/*Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/
#include <stdio.h>

int main()
{
   int n;
   int Positive=0;
   int Negative = 0;
   int Zero=0;
   printf("enter n : ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       printf("enter arr[i]");
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
       if(arr[i]>0){
          Positive=Positive+1;
       }else if(arr[i]<0){
           Negative=Negative+1;
       }else Zero=Zero+1;
   }printf("Positive=%d, Negative=%d,Zero=%d",Positive,Negative,Zero);
  
    return 0;
}
