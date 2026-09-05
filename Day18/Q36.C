/*Q36: Write a program to find the HCF (GCD) of two numbers.
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/
#include <stdio.h>

int main()
{
    int a,b,HCF;
    printf("enter a and b: ");
    scanf("%d  %d",&a,&b);
    int i =1;
    while(i<=a&&i<=b){
        if(a%i==0 && b%i==0){
           HCF = i;
        }else printf("");
        i++;
    }printf("%d",HCF);
    return 0;
}
