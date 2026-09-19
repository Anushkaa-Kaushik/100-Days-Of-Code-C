/*Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

int main()
{
   int n,m;
   printf("enter n and m : ");
   scanf("%d%d",&n,&m);
   int arr[n][m];
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
      printf("enter arr[i][j] : ");
      scanf("%d",&arr[i][j]);
       }
   }  
   for(int k=0;k<n+m-1;k++){
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(i+j==k)
               printf("%d ",arr[i][j]);
           }
       }
   }
        
   
    return 0;
}
