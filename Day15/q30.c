/*Q30: Write a program to reverse a given number.
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include <stdio.h>

int main()
{
   int n;
    printf("Enter a number n ;");
scanf("%d",&n);
int i=1;
while(n>0){
    i=n%10;
    printf("%d",i);
    n=n/10;
}

    return 0;
}
