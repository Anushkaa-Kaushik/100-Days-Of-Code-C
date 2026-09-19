/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main()
{
   int n;
   printf("enter n : ");
   scanf("%d",&n);
   int arr[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
      printf("enter arr[i][j] : ");
      scanf("%d",&arr[i][j]);
       }
   } int duplicate_found = 0;
   for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][i]==arr[j][j]){
                duplicate_found++;
            }
       }
       
        } if(duplicate_found>0){
            printf("False");
        }else printf("True");
        
   
    return 0;
}
