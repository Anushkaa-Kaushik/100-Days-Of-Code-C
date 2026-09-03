/*Q31: Write a program to take a number as input and print its equivalent binary representation.
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter number n:");
  scanf("%d",&n);
  int i = 1;
  while(n>0){
      i = n%2;
      printf("%d",i);
      n = n/2;
      
  }
    return 0;
}
