/*Q72: Find the sum of all elements in a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/
#include <stdio.h>

int main()
{
   int n,m,sum=0;
   printf("enter n,m : ");
   scanf("%d %d",&n,&m);
   int arr[n][m];
   for(int i =0;i<n;i++){
       for(int j=0;j<m;j++){
           printf("Enter arr [i][j] : \n");
           
           scanf("%d",&arr[i][j]);
       }
   }for(int i =0;i<n;i++){
       for(int j=0;j<m;j++){
       sum=sum+arr[i][j];   
          
}
       
   }printf("sum = %d",sum);
    return 0;
}
