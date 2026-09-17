/*Q73: Find the sum of each row of a matrix and store it in an array.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
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
   }for(int i = 0; i<n; i++){
       int rowsum[n];
        rowsum[i]= 0;
       for(int j=0;j<m;j++){
       rowsum[i]=rowsum[i]+arr[i][j]; 
          
}
           printf("%d  ",rowsum[i]);
       
   }
    return 0;
}
