/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main()
{
   int n;
   printf("enter n : ");
   scanf("%d",&n);
    int new_element;
   printf("enter new_element:");
   scanf("%d",&new_element);
   
   int arr[n+1];
   for(int i = 0; i<n  ;i++){
   printf("enter arr[i] : ");
   scanf("%d",&arr[i]);
  if(new_element<arr[i]){
      for(int j = n; j > i; j--)
{
    arr[j] = arr[j - 1];
}arr[i] = new_element;
  }else printf("");
       
   }printf("%d", arr[i]);
  

    return 0;
}
