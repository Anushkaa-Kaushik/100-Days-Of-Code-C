/*Q81: Count characters in a string without using built-in length functions.
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1
*/
#include <stdio.h>

int main()
{
  int count = 0;
   char str[100];
   printf("Enter str : ");
   scanf("%s",str);
   for(int i=0;str[i] != '\0' ; i++){
       count++;
   }printf("%d",count);
    return 0;
}
