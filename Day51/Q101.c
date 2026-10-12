/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int main()
{
   int target;
   printf("Enter target : ");
   scanf("%d",&target);
   int nums[6], i,j;
    printf("Enter nums[] : ");
   for(i=0;i<6;i++){
  
   scanf("%d",&nums[i]);
  
   }
   for(i=0;i<6;i++){
       if(target==nums[i]){
           printf("%d",i);
           for(j=i;j<6;j++){
               if(target==nums[i]){
                   printf("%d",i);
               }
           }
       } else printf("-1,-1");
   }
   
    return 0;
}
