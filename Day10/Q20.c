#include <stdio.h>

int main()
{
/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.


Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
int i;
printf("Enter i = ");
scanf("%d",&i);
switch(i){
    case 1 : printf("Monday");  break;
    case 2 : printf("Tuesday"); break;
    case 3 : printf("Wednesday"); break;
    case 4 : printf("Thursday"); break;
    case 5 : printf("Friday"); break;
    case 6 : printf("Saturday"); break;
    case 7 : printf("Sunday"); break;
}
    return 0;
}
