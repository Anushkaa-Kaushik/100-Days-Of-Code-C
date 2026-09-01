/*Q17: Write a program to find the roots of a quadratic equation and categorize them.


Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c= ");
    scanf("%d,%d,%d",&a,&b,&c);
    float r1 = (-b+pow((pow(b,2)-4*a*c),1/2))/2*a;
float r2 = (-b-pow((pow(b,2)-4*a*c),1/2))/2*a;
if((pow(b,2))-4*a*c>0){
    printf("Roots are real and different : %f,%f",r1,r2);

}else if(pow(b,2)-4*a*c==0){
    printf("Roots are real and same : %f",r1);

}else printf("Roots are complex");

    return 0;
}
