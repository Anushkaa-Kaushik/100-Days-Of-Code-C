/*Q71: Read and print a matrix.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/
#include <stdio.h>

int main()
{
   int n, m;
   printf("Enter n m :");
   scanf("%d %d",&n,&m);
   int arr[n][m];
   for(int i =0;i<n;i++){
       for(int i=0;i<m;i++){
           printf("enter arr[n][m]");
           scanf("%d",&arr[n][m]);
       }printf("\n%d",arr[n][m]);
   }
    return 0;
}
