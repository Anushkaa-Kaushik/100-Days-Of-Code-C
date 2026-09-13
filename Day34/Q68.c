/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/
#include <stdio.h>

int main()
{
 int n;
  printf("enter n : ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  printf("enter arr[i] : ");
  scanf("%d",&arr[i]);
      }
       int index_to_be_deleted,c;
   printf("enter index_to_be_deleted: ");
   scanf("%d",&index_to_be_deleted);
for(int i = index_to_be_deleted; i < n-1; i++){
   
    if(i>index_to_be_deleted){
        arr[i]=arr[i+1];
        
    }
}for(int i=0;i<n;i++){
printf("%d",arr[i]);}
    return 0;
}
