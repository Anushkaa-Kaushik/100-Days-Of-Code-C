/*Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/
#include <stdio.h>

int main()
{
    int n,digit;
    int original_number = n;
    int sum_of_cubes = 0;
    printf("enter number n : ");
    scanf("%d",&n);
    while(n>0){
      digit=n%10;
      sum_of_cubes = sum_of_cubes + digit*digit*digit;
      n = n/10;
      }
      if(original_number == sum_of_cubes){
          printf("Armstrong");
      }else 
      printf("Not Armstrong");
    

    return 0;
}
