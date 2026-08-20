/*Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main()
{
int c,s;
printf("enter selling price and cost price");
scanf("%d,%d",&c,&s);
float Profit = ((s - c) / c) * 100.0;
float Loss = ((c - s) / c) * 100.0;
if(s>c){
    printf("Profit = %d",Profit);

}else if(s=c){
    printf("No Profit No Loss");
}
else printf("Loss = %d",Loss);

    return 0;
}
