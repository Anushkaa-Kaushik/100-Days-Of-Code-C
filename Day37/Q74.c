/*Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/
#include <stdio.h>

int main()
{
  int n,m;
  printf("Enter n m : ");
  scanf("%d %d",&n,&m);
  int arr[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;i<m;j++){
          printf("enter arr [i][j] : ");
          scanf("%d %d",&arr[i][j]);
      }
  } int arrT[m][n];
  for(int j=0;j<m;j++){
      for(int i=0;i<n;i++){
          arrT[i][j]= arr[i][j];
          
      }
  } for(int j=0;j<m;j++){
      for(int i=0;i<n;i++){
          printf("%d",arrT[j][i]);
      }printf("\n");
  }
    return 0;
}
