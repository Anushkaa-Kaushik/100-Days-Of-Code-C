/*Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main()
{
  int n;
  printf("enter n : ");
  scanf("%d",&n);
  int arr[n+1];
  for(int i=0;i<n;i++){
  printf("enter arr[i] : ");
  scanf("%d",&arr[i]);}

  for(int i =n;i>0;i--){
       int inseting_index, elemnt_to_be_inserted;
  printf("enter inseting_index : ");
  scanf("%d",&inseting_index);
  printf("enter elemnt_to_be_inserted : ");
  scanf("%d",&elemnt_to_be_inserted);
      if(i>=inseting_index){
          
          arr[i]=arr[i-1];
          arr[i] = elemnt_to_be_inserted;
          arr[inserting_index] = element_to_be_inserted;
      }
      printf("%d",arr[i]);
  }
  
 
    return 0;
}
