/*Q89: Count frequency of a given character in a string.
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>

int main()
{
    int count = 0;
    int n=20;
    char str[20];
    printf("Enter str [20] : ");

    scanf("%s",str);
    char given_char;
     printf("Enter the char given: ");
     scanf(" %c",&given_char);
    for(int i=0;str[i]!='\0';i++){
       if(str[i]==given_char)
       count++;
    }
printf("%d",count);
    return 0;
}
