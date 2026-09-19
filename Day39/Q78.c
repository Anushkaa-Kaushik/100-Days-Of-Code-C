/*Q78: Find the sum of main diagonal elements for a square matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
   int n,sum=0;
   printf("enter n : ");
   scanf("%d",&n);
   int arr[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
      printf("enter arr[i][j] : ");
      scanf("%d",&arr[i][j]);
       }
   }  for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==j)
           sum= sum+arr[i][j];
       }
   }
   printf("%d",sum);
        
   
    return 0;
}
