/*Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/
#include <stdio.h>

int main()
{
   int n;
   printf("enter n : ");
   scanf("%d",&n);
   int arr[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
      printf("enter arr[i][j]");
      scanf("%d",&arr[i][j]);
       }
   } int arrT[n][n];
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arrT[i][j]=arr[j][i];
        }
   }for(int i =0;i<n;i++){
       for(int j=0;j<n;j++){
           if(arrT[i][j]==arr[i][j]){
               printf("True");
             
           }else printf("False");
       }
   }
    return 0;
}
