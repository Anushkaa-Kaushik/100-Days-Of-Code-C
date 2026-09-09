/*Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/
#include <stdio.h>

int main()
{
  int n;
  printf("enter n :");
  scanf("%d",&n);
  int arr[n];
  int i;
  for( i =0;i<n;i++){
      
      printf("enter arr[i] : ");
      scanf("%d",&arr[i]);
  }
      for( i =0;i<n;i++){
      int found=0;
      int element;
    
      printf("enter element : ");
      scanf("%d",&element);
      if(arr[i]==element){
          printf("Found at index %d",i);
      }else printf("-1");
      }

    return 0;
}
