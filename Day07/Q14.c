/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.


Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main()
{
char x;
printf("Enter Char= ");
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='u'||x=='o'){
    printf("Vowel");
}else printf("Consonant");
}
