/*Q75: Add two matrices.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/
#include <stdio.h>

int main()
{
  int n,m;
  printf("enter n m : ");
  scanf("%d %d", &n,&m);
  int arr1[n][m],arr2[n][m],arr3[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          printf("Enter arr1[i][j] : ");
          scanf("%d", &arr1[i][j]);
      }
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          printf("Enter arr2[i][j] : ");
          scanf("%d", &arr2[i][j]);
      }printf("\n");
  }for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
     arr3[i][j]=arr1[i][j]+arr2[i][j];
     printf("%d ",arr3[i][j]);
      }printf("\n");
  }
 
    return 0;
}
