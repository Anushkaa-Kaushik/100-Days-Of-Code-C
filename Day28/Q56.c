/*Q56: Read and print elements of a one-dimensional array.
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30
Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/
#include <stdio.h>

int main()
{
  int n;
  printf("enter number n : ");
  scanf("%d",&n);
  int num[n];
  for(int i=0 ; i<n ; i++){
  printf("enter i : ");
  scanf("%d", &num[i]);
  }
  for(int i =0; i<n ; i++){
  printf("%d ", num[i]);
  }
    return 0;
}
